#include "push_swap.h"
#include "../Libft/libft.h"

int	check_format(char **array)
{
	int i;
	int j;

	i = 1;
	while (array[i])
	{
		j = 0;
		if (array[i][j] == '-' && j == 0)
			j++;
		while (array[i][j])
		{
			if (!ft_isdigit(array[i][j]))
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
	return (i);
}

int	*get_args(char **array)
{
	int	*args;
	int	i;
	
	i = check_format(array);
	args = (int*)malloc(sizeof(int) * (i - 1));
	if (!args)
		return (NULL);
	i = 0;
	while (array[++i] != NULL)
		args[i - 1] = ft_atoi(array[i]);
	return (args);
}
