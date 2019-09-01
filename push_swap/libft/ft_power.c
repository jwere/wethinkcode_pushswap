/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 09:57:22 by jwere             #+#    #+#             */
/*   Updated: 2018/05/29 12:05:16 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_power(int nbr, int p)
{
	int ans;
	int n;

	n = nbr;
	ans = 0;
	if (p == 1)
		return (nbr);
	if (p <= 0)
		return (1);
	while (--p > 0)
	{
		ans = n * nbr;
		n = ans;
	}
	return (ans);
}
