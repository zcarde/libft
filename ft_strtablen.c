/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtablen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcarde <zcarde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 06:20:54 by zcarde            #+#    #+#             */
/*   Updated: 2015/09/08 06:21:11 by zcarde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strtablen(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		i++;
	return (i);
}