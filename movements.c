#include "push_swap.h"

void swap_x(pile *stack)
{
    pile *t1;
    pile *t2;

    t1 = stack;
    t2 = t1->next;
  //  t1->next = t1->next->next;
    t2->next->next = t2->next;
    //st1->next = stack->next;
}