/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 22:42:14 by jpeng             #+#    #+#             */
/*   Updated: 2020/10/06 12:10:08 by jpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			cnt;
	unsigned char	*ns;

	cnt = 0;
	ns = (unsigned char *)s;
	while (cnt < n)
	{
		if (ns[cnt] == (unsigned char)c)
			return ((void *)&ns[cnt]);
		cnt++;
	}
	return (NULL);
}
