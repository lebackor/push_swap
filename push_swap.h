#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"

typedef struct pile
{
	int			content;
	struct pile	*next;
}	pile;

pile	*ft_add_in_list(pile **alst, int *nb);
int	*ft_convert(const char *str);
pile	*ft_lst(int *nb);

#endif