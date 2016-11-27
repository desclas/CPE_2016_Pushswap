/*
** my.c for  in /home/mathias/Bureau/pushswap
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Sun Nov 27 15:53:26 2016 Mathias
** Last update Sun Nov 27 15:56:43 2016 Mathias
*/

#include "test.h"

int my_getnbr(char *str)
{
  int i;
  int result;

  i = 1;
  result = str[0] - 48;
  while (str[i] != '\0')
    {
      result = result * 10 + str[i] - 48;
      i += 1;
    }
  return (result);
}

int list_len(t_lista *list)
{
  t_lista *tmp;
  int i;

  i = 0;
  tmp = list;
  while (tmp != NULL)
    {
      i += 1;
      tmp = tmp->next;
    }
  return (i);
}

t_tab *pre_swapa(t_tab *list, int *tab)
{
  if (tab[2] == 0)
    {
      if (tab[0] == 1)
	write(1, " ", 1);
      write(1, "sa", 2);
      tab[0] = 1;
      list->lista = swapa(list->lista);
    }
  else
    {
      tab[3] = tab[2];
      while (tab[2] != 0)
	{
	  if (tab[0] == 1)
	    write(1, " ", 1);
	  write(1, "pb", 2);
	  tab[0] = 1;
	  push_listb(&list->listb, list->lista->nb);
	  list->lista = list->lista->next;
	  tab[2] -= 1;
	}
      write(1, " sa", 3);
      list->lista = swapa(list->lista);
    }
  return(list);
}

void ini(int *tab, int i)
{
  int count;

  count = 0;
  while (count != i - 1)
    {
      tab[count] = 0;
      count += 1;
    }
}
