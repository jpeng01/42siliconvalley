/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 14:32:14 by jpeng             #+#    #+#             */
/*   Updated: 2020/09/28 17:02:38 by jpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	cnt;
	size_t	cnt2;
	size_t	dst_len;
	size_t	src_len;

	cnt = ft_strlen(dst);
	cnt2 = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size < dst_len + 1)
		return (src_len + size);
	if (size > dst_len + 1)
	{
		while (cnt < size - 1)
		{
			*(dst + cnt) = *(src + cnt2);
			cnt++;
			cnt2++;
		}
		*(dst + cnt) = '\0';
	}
	return (dst_len + src_len);
}
