#include "push_swap.h"

int trie_tab(char **str, pile **a);

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
//  printf("%s\n", str[i]);
   str[++i] = '\0';
   return (str);
}

void clean_a(pile **a, pile **b)
{
  
  while (ft_strlenlist(a) > 2)
      begin_median(a, b);
}
void begin_median(pile **a, pile **b)
{
   char **str;
   int i;

   str = ft_put_tab(a);
   i = trie_tab(str, a);
   while ((*a)->content != i)
   {
      if ((*a)->content < i)
         push_pile(a, b, 'b');
      else if ((*a)->content > i)
         rotate(a,  'a');
   }
   if ((*a)->content == i)
      push_pile(a, b, 'b');
   free(str);
}

int trie_tab(char **str, pile **a)
{
   int i;
   int j;
   char *swp;

   i = 0;
   j = ft_strlenlist(a) - 1;
   while (j > 0)
   {
      if (ft_atoi(str[i]) > ft_atoi(str[j]))
      {
         swp = str[i];
         str[i] = str[j];
         str[j] = swp;
         i++;
      }
      else
         i++;
      if (i == j)
      {
         i = 0;
         j--;
      }
   }
   return (ft_atoi(str[(ft_strlenlist(a)) / 2]));
}