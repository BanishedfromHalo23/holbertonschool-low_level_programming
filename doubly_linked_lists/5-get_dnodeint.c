#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list.
 * @head: head of the dlistint_t list
 * @index: node to locate.
 * Return: address of the node located, otherwise, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
