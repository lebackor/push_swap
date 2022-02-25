#include "push_swap.h"

//void    put_fr_in_one(pile **a);
pile    *find_higher_nb(pile **a);
void list_run(pile **a, pile **b, pile *high);
void ft_run_r(pile **a,pile **b, pile *high);
void ft_run_rr(pile **a, pile **b, pile *high);
int list_begin(pile **a, pile *high);
int list_end(pile *high);

void    search_pile_b(pile **a, pile **b)
{
    pile    *tmp;
    pile    *tmp2;

    tmp = *a;
    tmp2 = *b;
    (void) *tmp;
    tmp2 = find_higher_nb(b);
   // printf("*%d*\n", tmp2->content);
    list_run(a, b, tmp2);
}

void list_run(pile **a, pile **b, pile *high)
{
    int r;
    int rr;

    r = list_begin(a, high);
    rr = list_end(high);
  //  printf("// r =%d, rr =%d//", r, rr);
    if (r < rr)
        ft_run_r(a, b, high);
    else
        ft_run_rr(a, b, high);

}

void ft_run_r(pile **a,pile **b, pile *high)
{
    pile *tmp;

    tmp = *a;
    while (tmp->next && tmp != high)
        rotate(b, 'b');
    push_pile(&high, a, 'a');
}

void ft_run_rr(pile **a, pile **b, pile *high)
{    
    pile *tmp;

    tmp = *a;
    while (tmp->next && tmp != high)
        reverse_rotate(b, 'b');
    if (high->next == NULL && high->content)
    {    
        reverse_rotate(b, 'b');
        push_pile(b, a, 'a');
    }
}

int list_begin(pile **a, pile *high)
{
    
    pile *tmp;
    int i;

    i = 0;
    tmp = *a;
    while (tmp->next && tmp != high)
    {
        tmp = tmp->next;
        i++;
    }
    return (i);
}

int list_end(pile *high)
{
    pile *tmp;
    int i;

    i = 0;
    tmp = high;
    while (tmp->next)
    {
        tmp = tmp->next;
        i++;
    }
    return (i);
}

void    init_algo(pile **a, pile **b)
{
    pile    *tmp;
    pile    *lst;
   // (void) **b;
   
   tmp = find_higher_nb(a);
   while ((*a)->next && (*a)->content != tmp->content)
        rotate(a, 'a');
    lst = (*a)->next;
    while (lst->next)
        push_pile(&lst, b, 'b');
    if (lst->next == NULL && lst->content)
        push_pile(&lst, b, 'b');
    (*a)->next = NULL;
    search_pile_b(a, b);
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