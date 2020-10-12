/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 16:54:18 by jpeng             #+#    #+#             */
/*   Updated: 2020/10/07 14:18:09 by jpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ndst;
	unsigned char	*nsrc;

	if (n == 0 || dst == src)
		return (dst);
	ndst = (unsigned char *)dst;
	nsrc = (unsigned char *)src;
	while (n--)
		*ndst++ = *nsrc++;
	return (dst);
}
