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

	if (ac >= 2)
	{
		len = check_format(av) - 1;
		args = get_args(av, len);
		// while (len-- >= 0)
		// 	printf("%d\n", args[len--]);
		stack_a = NULL;
		stack_a = form_stack(args, ac - 1);
		/*	TODO
		 *	- code movements: push, rotate, etc. w/ printf
		 *	- set up sorting algo: return nothing if input is already sorted
		 *	- return stack b
		 */	
		// t_stack *tmp = stack_a;
		// while (tmp != NULL)
		// {
		// 	ft_printf("%d\n", tmp->value);
		// 	tmp = tmp->next;
		// }
		free_stack(stack_a);
	}
	return (0);
}
