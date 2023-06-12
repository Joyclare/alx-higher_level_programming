#include "lists.h"

/**
 * reverse_listint -  a function that reverses a linked list
 * @head: points the first node
 *
 * Return: pointer to the first node
 */
void reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *cur = *head;
	listint_t *next = NULL;

	while (cur)
	{
		next = cur->next;
		cur->next = pre;
		pre = cur;
		cur = next;
	}

	*head = pre;
}

/**
 * is_palindrome - a function that checks if a linked list is a palindrome
 * @head: double pointer
 *
 * Return: 1 if it is
 * 0 if not
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head, *fast = *head, *temp = *head, *dup = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	while (1)
	{
		fast = fast->next->next;
		if (!fast)
		{
			dup = slow->next;
			break;
		}
		if (!fast->next)
		{
			dup = slow->next->next;
			break;
		}
		slow = slow->next;
	}

	reverse_listint(&dup);

	while (dup && temp)
	{
		if (temp->n == dup->n)
		{
			dup = dup->next;
			temp = temp->next;
		}
		else
			return (0);
	}

	if (!dup)
		return (1);

	return (0);
}
