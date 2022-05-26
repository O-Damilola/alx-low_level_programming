#include "lists.h"


/**
 * add_node - add a new node at the beginning of `list_t` list
 * @head: double pointer to head
 * @str: string to be saved in new node, must be duplicated
 * Return: Address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
size_t jupiter;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
for (jupiter = 0; str[jupiter] != '\0';)
jupiter++;
new->len = jupiter;
new->next = *head;
*head = new;
return (*head);
}
