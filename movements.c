#include "push_swap.h"

void swap_x(pile **stack)
{
    pile *t1;
    pile *t2;

    t1 = (*stack)->next;
    t2 = *stack;
    t2->next = t2->next->next;
    t1->next = t2;
    *stack = t1;
}

void    swap_ss(pile **a, pile **b)
{
    swap_x(*&a);
    swap_x(*&b);
}

void push_pile(pile **stack1, pile **stack2)
{
   // pile *tmp;

   // tmp = *stack1;

    if (!*stack2)
    {
        *stack2 = create_liste((*stack1)->content);
        (*stack1) = (*stack1)->next;
        return ;
    }
    ft_addback((*&stack2), (*stack1)->content);
    (*stack1) = (*stack1)->next;
   return ;
}

void    rotate(pile **stack)
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
   // return (*stack);
}

void    rotate_rr(pile **a, pile **b)
{
    rotate(*&a);
    rotate(*&b);
}

void    reverse_rotate(pile **stack)
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
   // return *stack;
}

void    reverse_rotate_rr(pile **a, pile **b)
{
    reverse_rotate(*&a);
    reverse_rotate(*&b);
}