/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:12:54 by jpeng             #+#    #+#             */
/*   Updated: 2020/09/28 16:12:16 by jpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	cnt;
	size_t	cnt2;

	if (!(str = (char *)malloc(sizeof(*s) * (len + 1))))
		return (NULL);
	cnt = 0;
	cnt2 = 0;
	while (s[cnt])
	{
		if (cnt >= start && cnt2 < len)
		{
			str[cnt2] = s[cnt];
			cnt2++;
		}
		cnt++;
	}
	str[cnt2] = '\0';
	return (str);
}
