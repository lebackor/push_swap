#include "push_swap.h"

void swap_x(pile **stack, char c)
{
    pile *t1;
    pile *t2;

    t1 = (*stack)->next;
    t2 = *stack;
    t2->next = t2->next->next;
    t1->next = t2;
    *stack = t1;
    if (c == 'a')
        ft_printf("sa\n");
    else if (c == 'b')
        ft_printf("sb\n");

}

void    swap_ss(pile **a, pile **b, char c)
{
    swap_x(*&a, c);
    swap_x(*&b, c);
}

void push_pile(pile **stack1, pile **stack2, char c)
{
   // pile *tmp;

   // tmp = *stack1;

    if (!*stack2)
    {
        *stack2 = create_liste((*stack1)->content);
        (*stack1) = (*stack1)->next;
        if (c == 'a')
          ft_printf("pa\n");
        else if (c == 'b')
          ft_printf("pb\n");
        return ;
    }
    ft_put_begin(stack1, stack2);
    if (c == 'a')
        ft_printf("pa\n");
    else if (c == 'b')
        ft_printf("pb\n");
   return ;
}

void    rotate(pile **stack, char c)
{
    pile    *tmp;
    pile    *tmp2;

    tmp = *stack;
    tmp2 = *stack;
    (*stack) = (*stack)->next;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = tmp2;
    tmp->next->next = NULL;
    if (c == 'a')
        ft_printf("ra\n");
    else if (c == 'b')
        ft_printf("rb\n");
}

void    rotate_rr(pile **a, pile **b)
{
    rotate(*&a, 'a');
    rotate(*&b, 'b');
}

void    reverse_rotate(pile **stack, char c)
{
    pile *tmp;
    pile *tmp2;

    tmp = *stack;
    while (tmp->next->next)
        tmp = tmp->next;
    tmp2 = tmp->next;
    tmp->next = NULL;
    tmp2->next = (*stack);
    (*stack) = tmp2;
    if (c == 'a')
        ft_printf("rra\n");
    else if (c == 'b')
        ft_printf("rrb\n");
}

void    reverse_rotate_rr(pile **a, pile **b)
{
    reverse_rotate(*&a, 'a');
    reverse_rotate(*&b , 'b');
    ft_printf("rra\nrrb\n");
}