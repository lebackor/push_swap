#include "push_swap.h"


pile *create_liste(int x)
{
	pile	*stack;

	stack = malloc(sizeof(pile));
	stack->content = x;
	//printf("%d", stack->content);
	stack->next = NULL;
	return (stack);
}

pile *ft_addback(pile **stack, int x)
{
	pile *pile;

	/*if (!*stack)
	{
		*stack = create_liste(x);
		//printf("%d", stack->content);
	}
	else
	{*/
		pile = *stack;
		while (pile->next != NULL)
			pile = pile->next;
		pile->next = create_liste(x);
		//printf("%d", pile->content);
	//}
	return (*stack);
}