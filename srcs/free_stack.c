/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@42.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:53:40 by nponchon          #+#    #+#             */
/*   Updated: 2024/10/18 18:54:48 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	free_stack(t_list **lst)
{
	t_list	*current;
	t_list	*tmp;

	if (lst == NULL || *lst == NULL)
		return ;
	current = *lst;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*lst = NULL;
}
