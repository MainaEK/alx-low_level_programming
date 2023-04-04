#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of a linked list
 * Return: number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t element;

	element = 0;
	while (h != NULL)
	{
		element++;
		h = h->next;
	}
	return (element);
}
