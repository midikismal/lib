/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:39:30 by marnguye          #+#    #+#             */
/*   Updated: 2023/10/20 13:39:32 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t len)
{
	char *p = (char *)str;

	char l = (char)c;

	while (len--)
	{
		*p++ = l;
	}
	return (str);
}

void ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}