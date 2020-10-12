/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 12:10:45 by jpeng             #+#    #+#             */
/*   Updated: 2020/10/07 14:18:30 by jpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	find;
	unsigned char	*ndst;
	unsigned char	*nsrc;

	find = (unsigned char)c;
	ndst = (unsigned char *)dst;
	nsrc = (unsigned char *)src;
	while (n--)
	{
		*ndst++ = *nsrc++;
		if (*(ndst - 1) == find)
			return (ndst);
	}
	return (NULL);
}
