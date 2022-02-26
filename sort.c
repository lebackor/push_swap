#include "push_swap.h"


char **ft_put_tab(pile **a)
{
   char **str;
   pile *tmp;
   int i;

   tmp = *a;
   i = 0;
   str = malloc(sizeof(char *) * ft_strlenlist(a) + 2);
   while (tmp->next)
   {
      str[i] = ft_itoa(tmp->content);
   //   printf("%s\n", str[i]);
      tmp = tmp->next;
      i++;
   }
   if (tmp->next == NULL && tmp->content)
      str[i] = ft_itoa(tmp->content);
  printf("%s\n", str[i]);
   str[++i] = '\0';
   return (str);
}

void short_sort(pile **a, pile **b)
{
   char **str;
   (void) **b;
   int i = 0;
   str =ft_put_tab(a);
   while (str[i])
   {
   
      printf("%s | ", str[i]);
      i++;
   }
   return ;
}