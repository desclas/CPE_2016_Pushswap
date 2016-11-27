/*
** test.c for  in /home/mathias/Bureau/pushswap
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Wed Nov 23 18:50:51 2016 Mathias
** Last update Sun Nov 27 15:57:38 2016 Mathias
*/

#include "test.h"

t_tab *pre_swapb(t_tab *list, int *tab)
{
  if (list->listb->next != NULL)
    if (list->listb->nb < list->listb->next->nb)
      {
	write(1, " sb", 3);
	list->listb = swapb(list->listb);
      }
  while (tab[3] != 0)
    {
      write(1, " pa", 3);
      push_lista(&list->lista, list->listb->nb);
      list->listb = list->listb->next;
      tab[3] -= 1;
    }
  return (list);
}

t_lista *ini_sort(t_tab *list, t_lista *tmp, int *tab)
{
  ini(tab, 4);
  tmp = list->lista;
  tab[1] = list->lista->nb;
  return (tmp);
}

void end_sort(t_tab *list)
{
  if (list->lista->nb > list->lista->next->nb)
    {
      write(1, " sa", 3);
      list->lista = swapa(list->lista);
    }
}

void sort(t_tab *list)
{
  t_lista *tmpa;
  int tab[4];

  tmpa = ini_sort(list, tmpa, tab);
  while (tmpa->next != NULL)
    {
      tmpa = tmpa->next;
      if (tab[1] > tmpa->nb)
	{
	  list = pre_swapa(list, tab);
	  tmpa = list->lista;
	  tab[1] = tmpa->nb;
	}
      else
	{
	  tab[1] = tmpa->nb;
	  tab[2] += 1;
	}
      if (list->listb != NULL)
	{
	  list = pre_swapb(list, tab);
	  tmpa = list->lista;
	}
    }
  end_sort(list);
}

int main(int av, char **ac)
{
  int i;
  int nombre;
  t_lista *lista;
  t_listb *listb;
  t_tab *list;

  lista = NULL;
  listb = NULL;
  list = malloc(sizeof(*list));
  list->lista = lista;
  list->listb = listb;
  i = 0;
  while (i != av - 1)
    {
      i += 1;
      nombre = my_getnbr(ac[i]);
      push_lista(&list->lista, nombre);
    }
  sort(list);
  write(1, "\n", 1);
  return (0);
}
