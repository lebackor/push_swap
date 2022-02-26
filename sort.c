#include "push_swap.h"

void short_sort(pile **a, pile **b)
{
   // pile *tmp;
    //pile *tmp1;
    int *list;
    int i = -1;
    (void) **b;
    //tmp = *a;
    //tmp1 = find_higher_nb(a);
    list = list_on_tab(a);
    while (list[++i])
        printf("%d ", list[i]);

   //printf("%ls", list);
}