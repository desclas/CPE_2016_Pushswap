/*
** push_swap.c for  in /home/mathias/Bureau/pushswap
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Sun Nov 27 14:51:11 2016 Mathias
** Last update Sun Nov 27 15:14:16 2016 Mathias
*/

#include "test.h"

void push_lista(t_lista **lista, int nb)
{
  t_lista *element;

  element = malloc(sizeof(*element));
  element->nb = nb;
  element->next = *lista;
  *lista = element;
}

void push_listb(t_listb **listb, int nb)
{
  t_listb *element;

  element = malloc(sizeof(*element));
  element->nb = nb;
  element->next = *listb;
  *listb = element;
}

t_lista *swapa(t_lista *lista)
{
  t_lista *tmp;
  t_lista *tmp2;

  tmp = lista->next;
  tmp2 = lista->next->next;
  tmp->next = lista;
  tmp->next->next = tmp2;
  return (tmp);
}

t_listb *swapb(t_listb *listb)
{
  t_listb *tmp;
  t_listb *tmp2;

  tmp = listb->next;
  tmp2 = listb->next->next;
  tmp->next = listb;
  tmp->next->next = tmp2;
  return (tmp);
}
