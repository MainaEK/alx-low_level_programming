#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of linked list
 * @head: head of linked list
 * @n: integer
 * Return: address of new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_elem;
	listint_t *tmp;

	n_elem = malloc(sizeof(listint_t));
	if (n_elem == NULL)
		return (NULL);
	n_elem->n = n;
	n_elem->next = NULL;
	if (*head == NULL)
	{
		*head = n_elem;
		return (n_elem);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = n_elem;
	return (n_elem);
}
