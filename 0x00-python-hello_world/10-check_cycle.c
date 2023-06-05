#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - a function that prints all elements of a listint_t list
 * @h: the pointer to head of list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
    const listint_t *cur;
    unsigned int l;

    cur = h;
    l = 0;
    while (cur != NULL)
    {
        printf("%i\n", cur->n);
        cur = cur->next;
        l++;
    }

    return (l);
}

/**
 * add_nodeint - a function that adds a new node at the beginning of
 * a listint_t list
 * @head: the pointer to a pointer of the start of the list
 * @n: the integer to be included in node
 * Return: the address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *n;

    n = malloc(sizeof(listint_t));
    if (n == NULL)
        return (NULL);

    n->l = l;
    n->next = *head;
    *head = n;

    return (n);
}

/**
 * free_listint - a function that frees a listint_t list
 * @head: the pointer to list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *cur;

    while (head != NULL)
    {
        cur = head;
        head = head->next;
        free(cur);
    }
}
