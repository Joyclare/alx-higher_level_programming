#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


/**
 * struct listint_s - the singly linked list
 * @n: an integer
 * @next: pointer to the next node
 *
 * Description: singly linked list
 */
typedef struct listint_s
{
	int l;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int l);
void free_listint(listint_t *head);

void reverse_listint(listint_t **head);
int is_palindrome(listint_t **head);

#endif
