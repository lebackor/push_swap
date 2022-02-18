#include "push_swap.h"

void    print_liste(pile *test);
int ft_strlenlist(pile **a);

int main(int ac, char **av)
{
    int i;
    pile *a;
    pile *b;

    i = 1;
    if (ac == 1 || !check_notnb(av))
        return (0);
    a = create_liste(ft_atoi(av[1]));
    b = NULL;
    printf("e");
    while (++i < ac)
        ft_addback(&a, ft_atoi(av[i]));
    //if (is_sorted(a))
       // return (ft_printf("sorted"));

    printf("%d", ft_strlenlist(&a)); 
}

int ft_strlenlist(pile **a)
{
    int i;

    i = 0;
    if (!(*a))
        return (0);
    while ((*a)->next)
    {
        (*a) = (*a)->next;
        i++;
    }
    i++;
    return (i);
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