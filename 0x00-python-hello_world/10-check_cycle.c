#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *  * check_cycle - checks if a singly linked list has
 * @list: pointer to the list
 *     * Return: 0 in the absence of cycle,
 *      * Return 1  in the presence of a cycle
 *       */

int check_cycle(listint_t *list)
{
	listint_t *slow = list;
        listint_t *fast = list->next;

	if (list == NULL || list->next == NULL)
{
	return (0);
}

	while (fast != NULL && fast->next != NULL) {
	if (slow == fast) {
	return (1);
}
      slow = slow->next;
	fast = fast->next->next;
	  }

	return (0);
}
