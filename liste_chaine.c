#include "push_swap.h"


pile *create_liste(long long x)
{
	pile	*stack;

	stack = malloc(sizeof(pile));
	stack->content = x;
	//printf("%d", stack->content);
	stack->next = NULL;
	return (stack);
}

void	ft_put_begin(pile **a, pile **b)
{
	pile *tmp1;

	tmp1 = create_liste((*a)->content);
	tmp1->next = *b;
	*b = tmp1;
	(*a) = (*a)->next;
}

pile *ft_addback(pile **stack, long long x)
{
	pile *pile;


	if (!(*stack))
		(*stack) = create_liste(x);
	else
	{
		pile = *stack;
		while (pile->next != NULL)
			pile = pile->next;
		pile->next = create_liste(x);
		//printf("%d", pile->content);
	}
	return (*stack);
}
