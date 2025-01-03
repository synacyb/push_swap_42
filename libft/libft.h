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

void ft_free_stack(t_list **stack);
int ft_valid_arguments(char *nptr);
long	ft_atoi(const char *nptr);
void    *creat_node(int element);
void	ft_lstadd_back(t_list **lst, t_list *new);
void    ft_print_list(t_list *list);
void    ft_swap_a(t_list *list);
void    ft_swap_b(t_list *list);
void    ft_swap_a_b(t_list *list1, t_list *list2);
void    ft_push_a(t_list **stack_a, t_list **stack_b);
void    ft_push_b(t_list **stack_a, t_list **stack_b);
void    ft_rotate_a(t_list **stack_a);
void    ft_rotate_b(t_list **stack_b);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_memcpy(void *dest, const void *src, size_t size);

#endif