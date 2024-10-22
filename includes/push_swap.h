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

# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

// INPUT CHECK & BUILD STACK

int			*get_args(char **array, int len);
int			check_format(char **array);
int			check_value(char *str);
void		check_double(char **array);
t_stack		*form_stack(int *array, int count);
void		free_stack(t_stack *stack);
void		print_error(void);
t_stack		*new_stack(int value);
void		stackadd_back(t_stack **stack, t_stack *new);
t_stack		*stacklast(t_stack *stack);

// MOVES

#endif
