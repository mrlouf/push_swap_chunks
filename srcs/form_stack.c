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

t_stack	*form_stack(int *array, int count)
{
	int		i;
	t_stack	*new;

	new = NULL;
	i = 0;
	while (i < count)
	{
		if (i > 0)
			stackadd_back(&new, new_stack(array[i]));
		else
			new = new_stack(array[i]);
		if (!new)
		{
			free(array);
			print_error();
		}
		i++;
	}
	free(array);
	return (new);
}
