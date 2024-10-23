/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:42:13 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/23 14:43:04 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

int		is_min(t_stack *stack_a)
{
	t_stack	*first;
	
	first = stack_a;
	stack_a = stack_a->next;
	while (stack_a->next != NULL)
	{
		if (first->value > stack_a->value)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

int		is_max(t_stack *stack_a)
{
	t_stack	*first;
	
	first = stack_a;
	stack_a = stack_a->next;
	while (stack_a->next != NULL)
	{
		if (first->value < stack_a->value)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

void	rotate_to_min(t_stack **stack_a)
{
	while (!is_min(*stack_a))
		rotate_a(stack_a);
}

void	rotate_to_max(t_stack **stack_a)
{
	while (!is_max(*stack_a))
		rotate_a(stack_a);
}
