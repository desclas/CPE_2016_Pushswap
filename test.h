/*
** test.h for  in /home/mathias/Bureau/pushswap
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Wed Nov 23 18:48:56 2016 Mathias
** Last update Sun Nov 27 15:57:26 2016 Mathias
*/

#ifndef TEST_H_
# define TEST_H_

# include <stdlib.h>
# include <unistd.h>

typedef struct s_lista
{
  int nb;
  struct s_lista *next;
}		t_lista;

typedef struct s_listb
{
  int nb;
  struct s_listb *next;
}		t_listb;

typedef struct s_tab
{
  t_lista *lista;
  t_listb *listb;
}		t_tab;

void push_lista(t_lista **lista, int nb);
void push_listb(t_listb **listb, int nb);
t_lista *swapa(t_lista *lista);
t_listb *swapb(t_listb *listb);
int my_getnbr(char *str);
int list_len(t_lista *list);
void show_list(t_lista *list);
t_tab *pre_swapa(t_tab *list, int *tab);
void ini(int *tab, int i);
t_tab *pre_swapb(t_tab *list, int *tab);
void sort(t_tab *list);


#endif /* !TEST_H_ */
