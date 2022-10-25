#include "lists.h"
/**
 * free_listint2 - this function frees a list by settin head to NULL
 * @head: pointer to list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!(head && *head))
		return;

	while ((*head) != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}
