#include "libft.h"
#include "../ft_printf/ft_printf.h"

void    ft_swap_a(t_list *list)
{
    if (!list || !list->next)
        exit(0);
    int tmp = 0;
    int value1 = list->content;
    int value2 = list->next->content;
    
    tmp = value1;
    list->content = value2;
    list->next->content = tmp;
    ft_printf("sa\n");
}