#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

int check_argument(char **argv)
{
	int i = 1;

	while (argv[i])
	{
		if (ft_valid_arguments(argv[i]))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
	return 0;
}
char	*ft_join_args(char **argv)
{
	int i;
	int j;
	char *arr;
	char *tmp;

	arr = NULL;
	j = 1;
	while (argv[j])
	{
		tmp = arr;
		arr = ft_strjoin(arr, argv[j]);
		if (tmp)
			free(tmp);
		i++;
		j++;
	}
	return arr;
}

int main(int arc, char **argv)
{
	if (arc > 1)
	{
		//int i;
		//int number;
		//t_list	*stack_a;
		//t_list	*stack_b;
		char *arr;

		//t_list	*actual_node = NULL;
		//stack_a = NULL;
		//stack_b = NULL;
		//i = 1;
		arr = ft_join_args(argv);
		// check_argument(argv);
		// while (argv[i])
		// {
		// 	number = ft_atoi(argv[i]);
		// 	actual_node = creat_node(number);
		// 	if (!stack_a)
		// 		stack_a = actual_node;
		// 	else
		// 		ft_lstadd_back(&stack_a, actual_node);
		// 	i++;
		// }

		// ft_printf("-----stack_a----\n");
		// ft_print_list(stack_a);
		// ft_push_b(&stack_a, &stack_b);
		// ft_push_b(&stack_a, &stack_b);
		// ft_printf("-----stack_b----\n");
		// ft_print_list(stack_b);
		// ft_swap_a_b(stack_a, stack_b);
		// ft_printf("\nafter :\n");
		// //ft_rotate_a(&stack_a);
		// ft_printf("-----stack_a----\n");
		// ft_print_list(stack_a);
		// ft_printf("-----stack_b----\n");
		// ft_print_list(stack_b);
		// // ft_print_list(stack_a);
		// // ft_print_list(stack_b);
		// ft_free_stack(&stack_a);
		printf("%s \n", arr);
		free(arr);
	}
}