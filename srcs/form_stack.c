/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:30:30 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/18 19:32:01 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

t_stacks	*form_stack(int *array, int count)
{
	int		i;
	t_stacks	*stacks;
	t_stack	*new;

	stacks = (t_stacks *)malloc(sizeof(t_stacks));
	if (!stacks)
		return (NULL);
	stacks = NULL;
	i = 0;
	while (i < count)
	{
		new = new_stack(array[i++]);
		if (!new)
		{
			free_stacks(stacks);
			free(array);
			print_error();
		}
		stackadd_back(&stacks->stack_a, new);
	}
	free(array);
	return (stacks);
}
