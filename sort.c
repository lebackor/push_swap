#include "push_swap.h"

int trie_tab(char **str, pile **a);
void split_b(pile **b);

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
      //printf("%d\n", i);
   }
   if ((tmp->content && tmp->next == NULL) ||(tmp->next == NULL && tmp->content == 0))
     { 
      str[i] = ft_itoa(tmp->content);
      str[++i] = '\0';
      return (str);
     }
  
   str[++i] = '\0';
   return (str);
}

void clean_a(pile **a, pile **b)
{
  
  while (ft_strlenlist(a) > 2)
      begin_median(a, b);
   if ((*a)->content > (*a)->next->content)
      swap_x(a, 'a');
 // split_b(b);
}
void begin_median(pile **a, pile **b)
{
   char **str;
   (void) **b;
   int i;
   int j;
   
   j = 0;
   str = ft_put_tab(a);
   i = trie_tab(str, a);
   if ((*a)->content == i)
   {
      rotate(a, 'a');
      free(str);
      return ;
   }
   while (j < ft_strlenlist(a))
   {
      if ((*a)->content < i)
         push_pile(a, b, 'b');
      else
         rotate(a,  'a');
      j++;
   }
  free(str);
}

void split_b(pile **b)
{
  char **str;
   int i;
   int j;
   
   j = 0;
   str = ft_put_tab(b);
   i = trie_tab(str, b);
   if ((*b)->content == i)
   {
      rotate(b, 'b');
      free(str);
      return ;
   }
   while (j < ft_strlenlist(b))
   {
      if ((*b)->content < i)
         return ;
      else
         rotate(b,  'b');
      j++;
   }
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
 /* if (ft_strlenlist(a) < 8)  
    return (ft_atoi(str[(ft_strlenlist(a)) / 2]));
  else*/
  if (ft_strlenlist(a) > 8)   
    return (ft_atoi(str[(ft_strlenlist(a)) / 7]));
  else
    return (ft_atoi(str[(ft_strlenlist(a)) / 3]));
}