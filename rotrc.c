#include "monty.h"

/**
 * f_rotr - Rotates the stack to the bottom
 * @head: Pointer to the head of the stack
 * @counter: Line number in the Monty bytecode file
 *
 * Description: This function rotates the stack to the bottom.
 * If the stack is empty or has only one element, it does nothing.
 * It modifies the stack in place.
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *current, *last;

    /* Check if the stack is empty or has only one element */
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	current = *head;
	last = *head;

    /* Find the last node in the stack */
	while (last->next)
	{
		last = last->next;
	}

    /* Adjust pointers to rotate the stack to the bottom */
	last->next = current;
	current->prev = last->next;
	last->prev->next = NULL;
	last->prev = NULL;

    /* Update the head of the stack */
	*head = last;
}
