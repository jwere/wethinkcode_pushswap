/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 18:39:02 by jwere             #+#    #+#             */
/*   Updated: 2018/08/22 16:38:02 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_s(t_ilist **alst, char stack)
{
	ft_swap_node(alst);
	ft_putchar('s');
	ft_putchar(stack);
	ft_putchar('\n');
}
