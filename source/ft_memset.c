/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:51:26 by ahovakim          #+#    #+#             */
/*   Updated: 2023/02/14 13:48:35 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	char	*result;
	size_t	i;

	result = (char *)destination;
	i = 0;
	while (i < n)
	{
		result[i] = c;
		++i;
	}
	return (result);
}
