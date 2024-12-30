#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

int main(int arc, char **argv)
{
	if (arc > 1)
	{
		int i;
		int number;

		t_list	*stack_a;
		t_list	*stack_b;
		t_list	*actual_node = NULL;

		stack_a = NULL;
		stack_b = NULL;
		i = 1;
		while (argv[i])
		{
			number = ft_atoi(argv[i]);
			actual_node = creat_node(number);
			if (!stack_a)
				stack_a = actual_node;
			else
				ft_lstadd_back(&stack_a, actual_node);
			i++;
		}
		ft_swap_a(stack_a);
		ft_print_list(stack_a);
		ft_printf("_\na\n");
	}
}