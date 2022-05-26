#include "lists.h"
/**
 * list_len - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 * Description: print the number of element in a linked list_t list
 */

size_t list_len(const list_t *h)
{
size_t jupiter = 0;

while(h != NULL)
{
h = h->next;
jupiter++;
}
return (jupiter);
}
