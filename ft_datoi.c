/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_datoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcarde <zcarde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/24 04:53:18 by zcarde            #+#    #+#             */
/*   Updated: 2015/03/24 05:28:16 by zcarde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static double	puiss(int pui, int ex)
{
	if (ex == 0)
		return (1);
	return (pui * puiss(pui, ex - 1));
}

static double	go_double(double result, int sign, int i, char *str)
{
	int j;

	if (str[i] == '.')
		i++;
	else
		return (result * sign);
	j = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0') / puiss(10, j + 1) + result;
		i++;
		j++;
	}
	return (result * sign);
}

double			ft_datoi(char *str)
{
	int		i;
	int		sign;
	double	result;

	i = 0;
	sign = 1;
	result = 0.0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	return (go_double(result, sign, i, str));
}
