/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:08:51 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/15 18:53:49 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

int	main(int ac, char **av)
{
	int		*args;
	int 	len;
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (ac >= 2)
	{
		len = check_format(av) - 1;
		args = get_args(av, len);
		stack_a = NULL;
		stack_b = NULL;
		stack_a = form_stack(args, len);
		/*	TODO
		 *	- code movements: push, rotate, etc. w/ printf
		 *	- set up sorting algo: return nothing if input is already sorted
		 *	- return stack b
		 */	
		reverse_a(&stack_a);
		t_stack *tmp = stack_a;
		while (tmp != NULL)
		{
			ft_printf("%d ", tmp->value);
		 	tmp = tmp->next;
		}
		free_all(stack_a, stack_b);
	}
	return (0);
}
