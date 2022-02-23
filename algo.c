#include "push_swap.h"

void    init_algo(pile **a, pile **b)
{
    //pile *tmp;
   // pile *lst;
    pile *f;

    
    f = find_higher_nb(a);
  //  lst = *a;
    while ((*a)->next)
    {

        if ((*a)->content != (f)->content && *a != NULL)
        {  
           // printf("x");
            push_pile(a, b);
        }
        else
        {
            printf("f");
            (*a) = (*a)->next;
        }
    }
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