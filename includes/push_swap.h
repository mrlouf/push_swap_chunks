/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:09:03 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/14 10:09:05 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	int			value;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

typedef struct s_stacks
{
	struct s_stack	*stack_a;
	struct s_stack	*stack_b;
}	t_stacks;

// INPUT CHECK & BUILD STACK

int		*get_args(char **array);
int		check_format(char **array);
t_stacks	*form_stack(int *array, int count);
void	free_stacks(t_stacks *stacks);
void	print_error(void);
t_stack	*new_stack(int value);
void	stackadd_back(t_stack **stack, t_stack *new);
t_stack	*stacklast(t_stack *stack);

// MOVES



#endif
