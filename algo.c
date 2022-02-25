#include "push_swap.h"

//void    put_fr_in_one(pile **a);
pile    *find_higher_nb(pile **a);


void    search_pile_b(pile **a, pile **b)
{
    

}

void    init_algo(pile **a, pile **b)
{
    pile    *tmp;
    pile    *lst;
    (void) **b;
   
   tmp = find_higher_nb(a);
   while ((*a)->next && (*a)->content != tmp->content)
        rotate(a);
    lst = (*a)->next;
    while (lst->next)
        push_pile(&lst, b);
    if (lst->next == NULL && lst->content)
        push_pile(&lst, b);
    (*a)->next = NULL;
    
}

pile    *find_higher_nb(pile **a)
{
    pile *tmp;
    pile *f;  

    f = *a;
    tmp = (*a)->next;
    while ((f)->next)
    {
        if ((f)->content > tmp->content)
            tmp = f;
        (f) = (f)->next;
    }
   if ((f)->content > tmp->content)
         tmp = f;
 // tmp->next = NULL;
    return tmp;
}