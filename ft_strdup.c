/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:58:38 by jpeng             #+#    #+#             */
/*   Updated: 2020/09/28 15:11:37 by jpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		str_len;
	int		cnt;

	str_len = ft_strlen(s1);
	if (!(str = (char *)malloc(sizeof(char) * str_len + 1)))
		return (NULL);
	cnt = 0;
	while (s1[cnt])
	{
		str[cnt] = s1[cnt];
		cnt++;
	}
	str[cnt] = '\0';
	return (str);
}
