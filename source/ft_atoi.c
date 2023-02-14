/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:21:43 by ahovakim          #+#    #+#             */
/*   Updated: 2023/02/14 13:47:08 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	nb = 0;
	j = 1;
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\f'
		|| str[i] == '\n' || str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		j *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	return (nb * j);
}
