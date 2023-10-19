#include "lists.h"


/**
* _strlen - length of a string
* @str: string
* Return: int
*/
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
       ;
	return (i);
}

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: address
* @str: string
* Return: address of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *t;

	if (str == NULL)
		return (NULL);
	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
	n->len = _strlen(n->str);
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	t = *head;
	while (t->next)
		t = t->next;
	t->next = n;
	return (n);
}
