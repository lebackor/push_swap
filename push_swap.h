#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"
#include <stdio.h>
typedef struct pile
{
	int			content;

	struct pile	*next;
}pile;


int	*ft_convert(const char *str);
pile *create_liste(long long x);
pile *ft_addback(pile **stack, long long x);
int check_duplicates_or_limits(pile *liste);
int is_sorted(pile *liste);
void swap_x(pile **stack);
void	push_pile(pile **stack1, pile **stack2, char c);
void    print_liste(pile *test);
void    rotate(pile **stack, char c);
void    reverse_rotate(pile **stack, char c);
void    swap_ss(pile **a, pile **b);
void    rotate_rr(pile **a, pile **b);
void    reverse_rotate_rr(pile **a, pile **b);
int check_notnb(char **av, int ac);
void    init_algo(pile **a, pile **b);
pile    *find_higher_nb(pile **a);
void    search_pile_b(pile **a, pile **b);
void begin_median(pile **a, pile **b);
int ft_strlenlist(pile **a);
int    *list_on_tab(pile **a);
char **ft_put_tab(pile **a);
void clean_a(pile **a, pile **b);
void	ft_put_begin(pile **a, pile **b);

#endif