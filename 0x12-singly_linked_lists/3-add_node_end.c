#include <string.h>
#include <stdio.h>
#include "lists.h"
#include "strlen.c"
#include <stdlib.h>

/**
 * add_node_end - dds a new node at the end of a list_t list
 * @head: douple pointer to the head of the linked list
 * @str: pointer to string to be assigned to the added node's str property
 * Return: pointer to the new node (SUCCESS) OR
 * NULL, if there is insufficent memory available (FAILURE)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *temp;

	if (str != NULL)
	{
		new_list = malloc(sizeof(list_t));
		if (new_list == NULL)
			return (NULL);
		new_list->str = strdup(str);
		new_list->len = _strlen(str);
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head = new_list;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = new_list;
			return (temp);
		}
	}

	return (NULL);
}
