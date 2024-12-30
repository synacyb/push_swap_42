#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// sttruct!

typedef struct list
{
    int content;
    struct list *next;
}t_list;

// all prototype

int	ft_atoi(const char *nptr);
void    *creat_node(int element);
void	ft_lstadd_back(t_list **lst, t_list *new);
void    ft_print_list(t_list *list);
void    ft_swap_a(t_list *list);
void    ft_swap_b(t_list *list);

#endif