/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btuncer <btuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:13:02 by btuncer           #+#    #+#             */
/*   Updated: 2024/11/02 21:23:57 by btuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static unsigned int count_digits(int n)
{
    unsigned int digits;

    if (n < 0)
        n = n * -1;
    digits = 0;
    while (n >= 1)
    {
        digits++;
        n = n / 10;
    }
    return (digits);
}
static unsigned int power_of10(unsigned int len)
{
    unsigned int i;

    i = 1;
    while (len--)
        i = i * 10;
    return (i);
}

char *ft_itoa(int n)
{
    char *res;
    unsigned int len;
    char    *p;

    p = res;
    len = count_digits(n);
    if (n < 0)
    {
        res = malloc(len + 2);
        *res = '-';
        res++;
        n = n * -1;
    }
    else
        res = malloc(len + 1);
    while (len--)
    {
        *res = (n / power_of10(len)) + 48;
        n = (n % power_of10(len));
        res++;
    }
    *res = '\0';
    return (p);
}

int main()
{
    char *res = ft_itoa(31);
    write(2, res, strlen(res)-1);
}