#include "push_swap.h"

void    print_liste(pile *test);

int main(int ac, char **av)
{
    int i;
    pile *test;
    pile *l;

    i = 1;
    if (ac == 1)
        return (0);
    test = create_liste(ft_atoi(av[1]));
  //  l = test;
    while (++i < ac)
        ft_addback(&test, ft_atoi(av[i]));

    if (!check_duplicates_or_limits(test))
    {
        write(1, "Error\n", 6);
        return (0);
    }
    if (is_sorted(test))
     {   
        printf("sorted\n");
       // return (1);
     }
   // else
     //   return (0);
    print_liste(test);
    swap_x(test);
    print_liste(test);

}

void    print_liste(pile *test)
{
    while (test->next)
    {
        printf("%d | ", test->content);
        test = test->next;
    }
    printf("%d", test->content);
}