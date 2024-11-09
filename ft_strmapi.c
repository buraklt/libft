/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btuncer <btuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:22:15 by btuncer           #+#    #+#             */
/*   Updated: 2024/11/09 00:24:34 by btuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	counter;

	res = malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	counter = 0;
	while (counter < ft_strlen(s))
	{
		res[counter] = f(counter, s[counter]);
		counter++;
	}
	res[counter] = '\0';
	return (res);
}
