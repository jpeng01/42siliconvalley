/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 23:44:39 by jpeng             #+#    #+#             */
/*   Updated: 2020/09/23 15:28:24 by jpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			cnt;
	unsigned char	*str1;
	unsigned char	*str2;

	cnt = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((cnt < n) && str1[cnt] == str2[cnt])
		cnt++;
	if (cnt == n)
		return (0);
	else
		return (str1[cnt] - str2[cnt]);
}
