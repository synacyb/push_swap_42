#include "libft.h"
#include "../ft_printf/ft_printf.h"

void    ft_rotate_a(t_list **stack_a)
{
    t_list *tmp;
    t_list *shift;

    tmp = *stack_a;
    shift = tmp->next;
    *stack_a = shift;
    tmp->next = NULL;
    ft_lstadd_back(stack_a, tmp);
    ft_printf("ra\n");
}