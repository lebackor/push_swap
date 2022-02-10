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
pile *create_liste(int x);
pile *ft_addback(pile **stack, int x);
int check_duplicates_or_limits(pile *liste);
int is_sorted(pile *liste);
void swap_x(pile **stack);
pile	*push_pile(pile **stack1, pile **stack2);
void    print_liste(pile *test);
pile    *rotate(pile **stack);
pile    *reverse_rotate(pile **stack);
void    swap_ss(pile **a, pile **b);
pile    *rotate_rr(pile **a, pile **b);
pile    *reverse_rotate_rr(pile **a, pile **b);
#endif