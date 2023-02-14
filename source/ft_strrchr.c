/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:58:49 by ahovakim          #+#    #+#             */
/*   Updated: 2023/02/14 13:50:10 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*s;
	char	*last;

	s = (char *)str;
	last = NULL;
	if ((char)ch == '\0')
		return (s + ft_strlen(s));
	while (*s)
	{
		if (*s == (char)ch)
			last = s;
		++s;
	}
	return (last);
}
