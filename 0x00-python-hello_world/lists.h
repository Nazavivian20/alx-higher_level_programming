#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next:points to the next node
 *
 * Description:singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_ *add_nodeint(listint_ t **head, const int);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif
