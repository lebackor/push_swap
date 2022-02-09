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
void swap_x(pile *stack);
#endif