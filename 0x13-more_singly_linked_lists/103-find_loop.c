#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of linked list
 * Return: address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s, *f;

	s = head;
	f = head;
	while (head != NULL)
	{
		if (s == f)
		{
			while (head != NULL)
			{
				if (s == f)
					return (s);
				s = s->next;
				f = f->next;
			}
		}
		s = s->next;
		f = f->next->next;
	}
}
