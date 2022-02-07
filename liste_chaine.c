#include "push_swap.h"

pile	*ft_lst(int *nb)
{
	pile	*t;

	t = malloc(sizeof(pile));
	if (!t)
		return (NULL);
	t->content = nb;
	t->next = NULL;
	return (t);
}

pile	*ft_add_in_list(pile **alst, int *nb)
{
	pile	*l;

//	*alst = ft_lst(content);
    if (!nb)
		return l;
	l = *alst;
	if (!*alst)
		(*alst) = &nb;
	else
	{
		while (l->next)
			l = l->next;
		l->next = &nb;
	}
    return (l);
}
/*
int	*ft_convert(const char *str)
{
	int			i;
	long long	*nb;
	int			sign;

	i = 0;
	nb = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (nb * sign > 2147483647)
			return (-1);
		else if (nb * sign < -2147483648)
			return (0);
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb * sign);
}
*/