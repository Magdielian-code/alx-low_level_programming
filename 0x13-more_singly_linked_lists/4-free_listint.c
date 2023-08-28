#include "lists.h"

/**
 * main - frees a linked list
 * head: listint_t list to be free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

