#include "lists.h"

/**
 * find_listint_loop - Find the loop contained in
 * a listint_t linked list
 * @head: A pointer to the head of the listint_t to check
 *
 * Return: if the list is not looped - 0
 * Otherwise - the number of unique node in the list
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise);
		}

		tortoise = tortoise->next;
		hare = (head->next)->next;
	}

	return (NULL);
}
