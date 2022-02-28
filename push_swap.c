#include "push_swap.h"

void    print_liste(pile *test);
int ft_strlenlist(pile **a);
int    fill_list(int ac, char **av, pile **a);

int main(int ac, char **av)
{
    //int i;
  //  long long nb;
    pile *a;
    pile *b;
    //(void) *b;
  //  i = 0;
    a = NULL;
    b = NULL;
    if (ac == 1 || !check_notnb(av, ac) || !fill_list(ac, av, &a))
        return (ft_printf("Error\n"));
  //  printf("e");
   // printf("%d", ft_strlenlist(&a));
    //if (ft_strlenlist(&a) < 6)
    //print_liste(a);
    //init_algo(&a, &b);
     push_pile(&a, &b,'b');
     push_pile(&a, &b,'b');
     print_liste(a);
    print_liste(b);
   // push_pile(&a, &b);
   // print_liste(a);
}

int    fill_list(int ac, char **av, pile **a)
{
    int i;
    long long nb; 
    i = 0;
    
    while (++i < ac)
    {
        nb = ft_atoi(av[i]);
        if (nb < -2147483648 || nb > 2147483647)
            return (0);
        *a = ft_addback(a, nb);
        if (!check_duplicates_or_limits(*a))
            return (0);
    }
    return (1);
}

int ft_strlenlist(pile **a)
{
    int i;
    pile *tmp;

    i = 0;
    if (!(*a))
        return (0);
    tmp = *a;
    while ((tmp)->next)
    {
        (tmp) = (tmp)->next;
        i++;
    }
    if (tmp->next == NULL && tmp->content)
        i++;
  //  printf("%d", i);
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