/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:55:13 by ahovakim          #+#    #+#             */
/*   Updated: 2023/02/14 13:49:41 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	n;
	size_t	i;

	i = 0;
	if (s && f)
	{
		n = ft_strlen(s);
		while (i < n)
		{
			(*f)(i, s);
			i++;
			s++;
		}
	}
}
