/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:08:51 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/15 18:53:49 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

int	main(int ac, char **av)
{
	int			*args;
	t_stacks	*stacks;

	if (ac >= 2)
	{
		args = get_args(av);
		stacks = NULL;
		stacks = form_stack(args, ac - 1);
		/*	TODO
		 *	- code movements: push, rotate, etc. w/ printf
		 *	- set up sorting algo: return nothing if input is already sorted
		 *	- return stack b
		 *	
		t_stack *temp = stacks->stack_a;
		while (temp != NULL)
		{
			ft_printf("%d\n", temp->value);
			temp = temp->next;
		} */
		free_stacks(stacks);
	}
	return (0);
}
