#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include "strlen.c"
/**
 * add_node - Adds a new node at the beginning of list_t list
 * @new_head: Address of node
 * @str: New node to add
 * Return: Address of new element, NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}

	return (0);
}
