#include "push_swap.h"

void    print_liste(pile *test);

int main(int ac, char **av)
{
    int i;
    pile *a;
    pile *b;

    i = 1;
    if (ac == 1)
        return (0);
    a = create_liste(ft_atoi(av[1]));
    b = NULL;
    while (++i < ac)
        ft_addback(&a, ft_atoi(av[i]));
    if (!check_duplicates_or_limits(a))
        return(ft_printf("Error\n"));
    //if (is_sorted(a))
       // return (ft_printf("sorted"));
    
    //print_liste(a);
    //swap_x(&a);
    //print_liste(a);
    push_pile(&a, &b);
    push_pile(&a, &b);
    push_pile(&a, &b);
    push_pile(&a, &b);
    //rotate(&a);
    print_liste(a);
    print_liste(b);
    reverse_rotate_rr(&a, &b);
    print_liste(a);
    print_liste(b);
}

void    print_liste(pile *test)
{
    while (test->next)
    {
        printf("%d | ", test->content);
        test = test->next;
    }
    printf("%d \n", test->content);
}