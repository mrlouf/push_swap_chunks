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

t_list	*form_list(int *array, int count)
{
	int		i;
	t_list	*lst;
	t_list	*new;

	lst = NULL;
	i = 0;
	while (i < count)
	{
		new = ft_lstnew(array[i++]);
		if (!new)
		{
			free_stack(&lst);
			free(array);
			print_error();
		}
		ft_lstadd_back(&lst, new);
	}
	free(array);
	return (lst);
}
