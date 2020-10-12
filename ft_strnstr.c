/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 21:57:55 by jpeng             #+#    #+#             */
/*   Updated: 2020/10/07 14:15:29 by jpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t			cnt;
	size_t			cnt2;
	unsigned char	*str;
	unsigned char	*find;

	cnt = 0;
	str = (unsigned char *)hay;
	find = (unsigned char *)need;
	if (find[cnt] == '\0')
		return ((char *)str);
	while (str[cnt] && cnt < len)
	{
		if (str[cnt] == find[0])
		{
			cnt2 = 0;
			while (find[cnt2] && str[cnt] == find[cnt2] && (cnt + cnt2 < len))
				cnt2++;
			if (find[cnt2] == '\0')
				return ((char *)&str[cnt]);
		}
		cnt++;
	}
	return (NULL);
}
