#include "push_swap.h"

int check_duplicates_or_limits(pile *liste)
{
    pile *t;
    pile *a;
    t = liste;
    //a = liste->next;

    while (t->next)
    {    
        if (t->content < -2147483648 || t->content > 2147483647)
            return (0);
        a = t->next;
        if (t->content == a->content)
            return 0;
        while (a->next)
        {
            a = a->next;
            if (t->content == a->content)
             {   
                printf("%d - %d\n", t->content, a->content);
                return (0);
             }
            
        }
        t = t->next;
    }
    return (1);
}

int is_sorted(pile *liste)
{
    pile *t;

    t = liste;
    while(t->next)
    {
        if (t->content > t->next->content)
            return (0);
        t = t->next;
    }
    return (1);
}