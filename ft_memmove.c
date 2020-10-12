/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 21:28:31 by jpeng             #+#    #+#             */
/*   Updated: 2020/10/06 11:55:19 by jpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ndst;
	unsigned char	*nsrc;

	if (len == 0 || dst == src)
		return (dst);
	ndst = (unsigned char *)dst;
	nsrc = (unsigned char *)src;
	if (ndst < nsrc)
		while (len--)
			*ndst++ = *nsrc++;
	else
	{
		ndst += len;
		nsrc += len;
		while (len--)
		{
			ndst--;
			nsrc--;
			*ndst = *nsrc;
		}
	}
	return (dst);
}
