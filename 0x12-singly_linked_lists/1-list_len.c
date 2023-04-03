#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t list_len(const list_t *h)
{
	size_t n = 0;
	
	while (h)
	{
		n++;
		h = h->next;
	}
 return (n);


}
