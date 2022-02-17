#include "push_swap.h"

int check_notnb(char **av)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (av[j][i])
    {
        i = 0;
        while(av[j][i])
        {
            if (av[j][i] < '0' || av[j][i] > '9')
            {
                ft_printf("error detected");
                return (0);
            }
            i++;
        }
        j++;
    }
    return (1);
}

int check_duplicates_or_limits(pile *liste)
{
    pile *t;
    pile *a;
    t = liste;

    
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
                return (0);
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