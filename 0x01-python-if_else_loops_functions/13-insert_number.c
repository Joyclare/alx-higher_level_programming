#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * insert_node - a function that inserts a number into a sorted
 * singly-linked list
 * @head: points the head of the linked list
 * @number: number to insert
 * Author - Joyclare Cherono
 * Return: If function fails - NULL
 * O/w - a pointer to the new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *nw;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = number;

	if (node == NULL || node->n >= number)
	{
		nw->next = node;
		*head = nw;
		return (nw);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	nw->next = node->next;
	node->next = nw;

	return (nw);
}
