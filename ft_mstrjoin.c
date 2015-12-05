/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mstrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcarde <zcarde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/02 20:27:09 by zcarde            #+#    #+#             */
/*   Updated: 2015/09/02 22:42:38 by zcarde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_mstrjoin(int nb, ...)
{
	va_list	ap;
	char	*ret;
	char	*tmp;
	int		i;

	va_start(ap, nb);
	ret = "";
	i = 0;
	while (i < nb)
	{
		tmp = va_arg(ap, char*);
		ret = ft_strjoin(ret, tmp);
		i++;
	}
	return (ret);
}
