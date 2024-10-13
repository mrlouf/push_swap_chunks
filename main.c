#include "push_swap.h"
#include "../Libft/libft.h"

int	main(int ac, char **av)
{
	int	*stack_a;

	if (ac > 2)
	{
		stack_a = get_args(av);

		/*	TODO
		 *	- check duplicates?
		 *	- add each number in a node and form list (stack a)
		 *	- code movements: push, rotate, etc. w/ printf
		 *	- set up sorting algo
		 *	- return stack b
		 *	*/
		int i = 0;
		while (i < ac - 1)
		{
			printf("%d\n", stack_a[i]);
			i++;
		}
		ft_printf("nbr args = %d\n", i);
	}
	return (0);
}
