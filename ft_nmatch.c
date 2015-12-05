/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nmatch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcarde <zcarde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 21:35:04 by zcarde            #+#    #+#             */
/*   Updated: 2015/03/04 07:02:22 by zcarde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nmatch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
		return (0);
	else if (*s1 == *s2)
		return (ft_nmatch(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (ft_nmatch(s1 + 1, s2) + ft_nmatch(s1 + 1, s2 + 1));
	else
		return (0);
}
