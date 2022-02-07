#include "push_swap.h"


int main(int ac, char **av)
{
    int i;
    pile **test;
    
    i = 2;
    if (ac == 1)
        return (0);
    //test = NULL;
    *test = ft_lst(ft_atoi(av[1]));
    while (av[i])
    {
        ft_add_in_list(test, ft_atoi(av[i]));
        i++;
    }
}