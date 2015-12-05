/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcarde <zcarde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 23:26:23 by zcarde            #+#    #+#             */
/*   Updated: 2014/11/26 23:30:27 by zcarde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstrtab(char **str)
{
	if (str)
	{
		if (*str)
		{
			ft_putstr("{ \"");
			while (*str)
			{
				ft_putstr(*str);
				ft_putstr("\", \"");
				str++;
			}
			ft_putstr("\b\b\b   \b\b}\n");
		}
	}
}
