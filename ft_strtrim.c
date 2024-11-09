/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btuncer <btuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 02:19:11 by btuncer           #+#    #+#             */
/*   Updated: 2024/10/28 17:07:14 by btuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>
#include <stdlib.h>

static bool	ft_is_inset(char const c, char const *set)
{
	bool	in_set;

	in_set = false;
	while (*set)
		if (c == *set++)
			in_set = true;
	return (in_set);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*left;
	char			*right;
	char			*res;
	unsigned int	cnt;

	if (!s1)
		return (NULL);
	left = (char *)s1;
	right = (char *)(s1 + ft_strlen(s1) - 1);
	while (ft_is_inset(*left, set) && left++)
		;
	while (ft_is_inset(*right, set) && right-- && left != right)
		;
	res = malloc(right - left + 2);
	if (!res)
		return (NULL);
	cnt = 0;
	while (right >= left)
	{
		*(res + cnt) = *left++;
		cnt++;
	}
	*(res + cnt) = '\0';
	return (res);
}
