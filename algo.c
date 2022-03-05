#include "push_swap.h"



void list_run(pile **a, pile **b, pile *high)
{
    int r;
    int rr;

    r = list_begin(b, high);
    rr = list_end(high);
    if (r <= rr)
        ft_run_r(a, b, high);
    else
        ft_run_rr(a, b, high);
    return ;

}

void ft_run_r(pile **a,pile **b, pile *high)
{
    pile *tmp;

    tmp = *b;
    while (tmp->next && tmp != high)
        rotate(b, 'b');
    if (tmp == high)
        push_pile(b, a, 'a');
}

void ft_run_rr(pile **a, pile **b, pile *high)
{    
    pile *tmp;
    (void) **a;

    tmp = *b;
    while (tmp != high && tmp->next)
      {  
        tmp = *b;
        if (tmp == high)
        {
          push_pile(b, a, 'a');
          return ;
        }
        reverse_rotate(b, 'b');
  
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
        if (tmp->content == high->content)
            return (i);
        tmp = tmp->next;
        i++;
    }
    if (tmp->next == NULL && tmp != high)
        return (0);
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


void algo_3(pile **a)
{
    while (!is_tried(a))
    {
      if ((*a)->content > (*a)->next->content)
          swap_x(a, 'a');
      else if ((*a)->next->content > (*a)->next->next->content)
         reverse_rotate(a, 'a');
    }
}

void    init_algo(pile **a, pile **b)
{
    pile    *tmp;

   tmp = *a;
  (void) *tmp;
  if (ft_strlenlist(a) == 3)
      algo_3(a);
  else if (ft_strlenlist(a) < 10)
      algo_5(a, b);
  else
  {
      clean_a(a, b);
      while (ft_strlenlist(b) > 1)  
          find_in_b_max(a, b);
      if ((*b))
          push_pile(b, a, 'a');
    }
}

void find_in_b_max(pile **a, pile **b)
{
    pile *tmp;

    tmp = find_higher_nb(b);
   // printf("%d", tmp->content);
    list_run(a, b, tmp);
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