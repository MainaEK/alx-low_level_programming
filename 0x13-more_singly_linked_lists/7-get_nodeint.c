#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of linked list
 * @index: index of the node
 * Return: node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	if (head == NULL)
		return (NULL);

	node = head;
	n = 0;
	while (node != NULL)
	{
		if (n == index)
			return (node);
		node = node->next;
		n++;
	}
	return (NULL);
}
