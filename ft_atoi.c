/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:41:35 by jpeng             #+#    #+#             */
/*   Updated: 2020/10/10 16:42:11 by jpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	while_escape(const char *str, int cnt)
{
	return ((str[cnt] == ' ' || str[cnt] == '\t' || str[cnt] == '\n' ||
			str[cnt] == '\v' || str[cnt] == '\f' || str[cnt] == '\r') &&
			str[cnt] != '\0');
}

int			ft_atoi(const char *str)
{
	int			sign;
	int			cnt;
	long int	res;

	sign = 1;
	res = 0;
	cnt = 0;
	if (!str)
		return (0);
	while (while_escape(str, cnt))
		cnt++;
	if (str[cnt] == '-')
		sign = -1;
	if (str[cnt] == '-' || str[cnt] == '+')
		cnt++;
	while (str[cnt] && str[cnt] >= '0' && str[cnt] <= '9')
	{
		res = res * 10 + (str[cnt] - 48);
		cnt++;
		if (res > 2147483648 && sign == 1)
			return (-1);
		else if (res > 2147483648 && sign == -1)
			return (0);
	}
	return (res * sign);
}
