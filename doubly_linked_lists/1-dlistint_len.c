#include "lists.h"

/**
 * dlistint_len - function that prints all the elements of a list
 * @h: the pointer to the head node
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{

		h = h->next;
		count++;
	}
	return (count);
}
