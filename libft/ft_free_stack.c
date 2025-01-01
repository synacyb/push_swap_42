#include "libft.h"

void ft_free_stack(t_list **stack)
{
	t_list *current;
	t_list *next;

	if (!stack || !*stack)
		return;

	current = *stack;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*stack = NULL;
}
