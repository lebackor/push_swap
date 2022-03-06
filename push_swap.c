#include "push_swap.h"

int	main(int ac, char **av)
{
	pile	*a;
	pile	*b;

	a = NULL;
	b = NULL;
	if (ac == 1 || !check_notnb(av, ac) || !fill_list(ac, av, &a))
		return (ft_printf("Error\n"));
	if (is_tried(&a) || ft_strlenlist(&a) < 2)
		return (0);
	if (ft_strlenlist(&a) > 2)
		init_algo(&a, &b);
	else
	{
		if (a->content > a->next->content)
			swap_x(&a, 'a');
	}
}

int	fill_list(int ac, char **av, pile **a)
{
		int		i;
	long long	nb;

	i = 0;
	while (++i < ac)
	{
		nb = ft_atoi(av[i]);
		if (nb < -2147483648 || nb > 2147483647)
			return (0);
		*a = ft_addback(a, nb);
		if (!check_duplicates_or_limits(*a))
			return (0);
	}
	return (1);
}

int	is_tried(pile **a)
{
	pile	*tmp;

	tmp = *a;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		else
			tmp = tmp->next;
	}
	return (1);
}

int	ft_strlenlist(pile **a)
{
	int		i;
	pile		*tmp;

	i = 0;
	if (!(*a))
		return (0);
	tmp = *a;
	while ((tmp)->next)
	{
		(tmp) = (tmp)->next;
		i++;
	}
	if (tmp->next == NULL && (tmp->content || tmp->content == 0))
		i++;
	return (i);
}

/*
void    print_liste(pile *test)
{
	while (test->next)
	{
		printf("%d | ", test->content);
		test = test->next;
	}
	printf("%d \n", test->content);
}
 int is_tried(pile **a)
   {
   pile *tmp;

   tmp = *a;

   while (tmp->next)
   {
   if (tmp->content > tmp->next->content)
   return (0);
   else
   tmp = tmp->next;
   }
   return 1;
   }*/
