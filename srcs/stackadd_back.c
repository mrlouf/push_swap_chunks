/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackadd_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:20:19 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/21 11:21:56 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

void	stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*tmp;

	if (!new || !stack)
		return ;
	tmp = stacklast(*stack);
	tmp->next = new;
	new->prev = tmp;
	return ;
}
