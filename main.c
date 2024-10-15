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

#include "push_swap.h"
#include "./Libft/libft.h"

int	main(int ac, char **av)
{
	int		*args;
	t_list	*stack;

	if (ac >= 2)
	{
		args = get_args(av);
		stack = form_list(args, ac - 1);
	//	ft_printf("arg 3 = %d\n", args[2]);
	//	ft_printf("%d\n", ft_lstsize(stack));
		/*	TODO
		 *	- code movements: push, rotate, etc. w/ printf
		 *	- set up sorting algo: return nothing if input is already sorted
		 *	- return stack b
		 *	*/
		while (stack != NULL)
		{
			ft_printf("%d\n", stack->content);
			stack = stack->next;
		}
		free_stack(stack);
	}
	return (0);
}
