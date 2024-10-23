/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:03:12 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/23 11:03:13 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

void	sort_three(t_stack **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value
		&& (*stack_a)->value > (*stack_a)->next->next->value)
	{
		if ((*stack_a)->next->value > (*stack_a)->next->next->value)
		{
			rotate_a(stack_a);
			swap_a(stack_a);
		}
		else
			rotate_a(stack_a);
	}
	else if ((*stack_a)->value > (*stack_a)->next->value
		&& (*stack_a)->value < (*stack_a)->next->next->value)
		swap_a(stack_a);
	else if ((*stack_a)->value < (*stack_a)->next->value
		&& (*stack_a)->value > (*stack_a)->next->next->value)
		reverse_a(stack_a);
	else
	{
		swap_a(stack_a);
		rotate_a(stack_a);
	}
}

void	sort_small(t_stack **stack_a, t_stack **stack_b, int size)
{
	(void)stack_b;
	if (is_sorted(stack_a))
		return ;
	if (size == 2)
		swap_a(stack_a);
	if (size == 3)
		sort_three(stack_a);
}
