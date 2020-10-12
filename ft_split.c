/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:45:22 by jpeng             #+#    #+#             */
/*   Updated: 2020/10/10 17:18:01 by jpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_get_arr(char const *str, char c)
{
	char	**arr;
	int		size;
	int		cnt;
	int		cnt2;

	cnt = 0;
	size = 0;
	while (str[cnt])
	{
		cnt2 = cnt;
		while (str[cnt2] != c && str[cnt2] != '\0')
			cnt2++;
		if (cnt2 > cnt)
		{
			size++;
			cnt = cnt2;
			continue ;
		}
		cnt++;
	}
	arr = (char **)malloc(sizeof(char *) * (size + 1));
	return (arr);
}

static char	**ft_free(char **str, int size)
{
	int		cnt;

	cnt = 0;
	while (cnt < size + 1)
	{
		free(str[cnt]);
		cnt++;
	}
	free(str);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	char	**str;
	int		size;
	int		cnt;
	int		cnt2;

	if (!s || !(str = ft_get_arr(s, c)))
		return (NULL);
	size = 0;
	cnt = -1;
	while (s[++cnt] != '\0')
	{
		cnt2 = cnt;
		while (s[cnt2] != c && s[cnt2] != '\0')
			cnt2++;
		if (cnt2 > cnt)
		{
			if (!(str[size] = (char *)malloc(sizeof(char) * (cnt2 - cnt + 1))))
				return (ft_free(str, size));
			ft_strlcpy(str[size++], s + cnt, cnt2 - cnt + 1);
			cnt = cnt2 - 1;
		}
	}
	str[size] = 0;
	return (str);
}
