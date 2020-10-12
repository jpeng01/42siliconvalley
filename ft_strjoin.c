/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:21:16 by jpeng             #+#    #+#             */
/*   Updated: 2020/10/06 12:06:23 by jpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;
	int		cnt;
	int		cnt2;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	if (!s1 || !s2)
		return (NULL);
	cnt = 0;
	cnt2 = 0;
	while (s1[cnt])
	{
		str[cnt] = s1[cnt];
		cnt++;
	}
	while (s2[cnt2])
	{
		str[cnt] = s2[cnt2];
		cnt++;
		cnt2++;
	}
	str[cnt] = '\0';
	return (str);
}
