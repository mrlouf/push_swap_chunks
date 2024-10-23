/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:03:12 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/23 10:39:01 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

void	sort_small(t_stack **stack_a, t_stack **stack_b, int size)
{
	(void)stack_b;
	if (is_sorted(stack_a))
		return ;
	if (size == 2)
		swap_a(stack_a);
}
