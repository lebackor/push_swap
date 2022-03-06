#include "push_swap.h"

void list_run_5(pile **a, pile **b, pile *high)
{
	int r;
	int rr;

	r = list_begin(a, high);
	rr = list_end(high);
	if (r <= rr)
		ft_run_r_5(a, b, high);
	else
		ft_run_rr_5(a, b, high);
	return ;

}

void algo_5(pile **a, pile **b)
{
	//pile *tmp;
	pile *low;
	(void) **b;
	// (void) **a;
	//tmp = *a;

	(void ) *low;
	while (ft_strlenlist(a) > 3)
	{
		low = find_lowest_nb(a);

		list_run_5(a, b, low);
	}
	/* if ((*a)->content > (*a)->next->content)
	   swap_x(a, 'a');*/
	algo_3(a);
	while (ft_strlenlist(b))
		push_pile(b, a, 'a');

}

pile    *find_lowest_nb(pile **a)
{
	pile *tmp;
	pile *f;  

	f = *a;
	tmp = (*a)->next;
	while ((f)->next)
	{
		if ((f)->content < tmp->content)
			tmp = f;
		(f) = (f)->next;
	}
	if ((f)->content < tmp->content)
		tmp = f;
	// tmp->next = NULL;
	return tmp;
}

void ft_run_r_5(pile **a,pile **b, pile *high)
{
	pile *tmp;

	tmp = *a;
	while (tmp->next && tmp != high)
		rotate(a, 'a');
	if (tmp == high)
		push_pile(a, b, 'b');
}

void ft_run_rr_5(pile **a, pile **b, pile *high)
{    
	pile *tmp;
	(void) **a;

	tmp = *a;
	while (tmp != high && tmp->next)
	{  
		tmp = *a;
		if (tmp == high)
		{
			push_pile(a,  b, 'b');
			return ;
		}
		reverse_rotate(a, 'a');

	}      
}
/*
   int list_begin_5(pile **a, pile *high)
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
   if (tmp->next == NULL)
   return (0);
   return (i);
   }
   int list_end_5(pile *high)
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
   }*/
