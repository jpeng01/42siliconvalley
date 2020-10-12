/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 04:01:57 by jpeng             #+#    #+#             */
/*   Updated: 2020/09/26 21:03:06 by jpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			cnt;
	unsigned char	*str1;
	unsigned char	*str2;

	cnt = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[cnt] == str2[cnt] && str1[cnt] && str2[cnt] && cnt < n)
		cnt++;
	return (str1[cnt] - str2[cnt]);
}
