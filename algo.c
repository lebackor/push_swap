#include "push_swap.h"

void    init_algo(pile **a, pile **b)
{
    pile *tmp;
    pile *lst;

    tmp = *a;
    lst = *a;
    while ((lst)->next)
    {
        if ((*a)->content > tmp->content)
            tmp = (*a);
        else if (((*a)->content) < tmp->content)
            push_pile(a, b);
        *a = (*a)->next;
    }
}