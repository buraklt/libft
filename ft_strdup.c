/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btuncer <btuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:25:50 by btuncer           #+#    #+#             */
/*   Updated: 2024/11/09 04:22:09 by btuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char *res;
	size_t len;
	size_t counter;

	len = ft_strlen(s);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	counter = 0;
	while (counter < len)
	{
		res[counter] = s[counter];
		counter++;
	}
	res[counter] = '\0';
	return (res);
}