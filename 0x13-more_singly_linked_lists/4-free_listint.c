#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the address of the first element
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	if (head == NULL)
		return;
	h = head;
	while (head != NULL)
	{
		h = head;
		head = head->next;
		free(h);
	}
	free(head);
}
