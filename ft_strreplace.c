/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcarde <zcarde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/18 01:10:21 by zcarde            #+#    #+#             */
/*   Updated: 2015/09/18 01:11:42 by zcarde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strreplace(char *s, char *find, char *replace)
{
	int		i;
	int		j;
	int		k;
	char	*ret;
	char	*st;

	i = 0;
	if (!(ret = (char *)malloc(sizeof(char)
			* (ft_strlen(s) - ft_strlen(find) + ft_strlen(replace)))))
		return (NULL);
	st = ft_strstr(s, find);
	while (s[i] && &(s[i]) != st)
	{
		ret[i] = s[i];
		i++;
	}
	k = i;
	j = 0;
	while (replace[j])
	{
		ret[i] = replace[j];
		j++;
		i++;
	}
	k += ft_strlen(find);
	while (s[k])
	{
		ret[i] = s[k];
		k++;
		i++;
	}
	ret[i] = 0;
	return (ret);
}


