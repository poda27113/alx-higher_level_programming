#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/* Definition of the singly linked list node
 * Function to check if a singly linked list has a cycle
 *return 0 - No cycle if list is empty
 * */

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
