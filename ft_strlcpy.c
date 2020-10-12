/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 13:48:50 by jpeng             #+#    #+#             */
/*   Updated: 2020/09/28 17:17:22 by jpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	cnt;

	cnt = 0;
	if (!dst || !src)
		return (0);
	if (size > 0)
	{
		while (--size && src[cnt])
		{
			dst[cnt] = src[cnt];
			cnt++;
		}
		dst[cnt] = '\0';
	}
	while (src[cnt])
		cnt++;
	return (cnt);
}
