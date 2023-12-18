#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top
 * @head: Pointer to the head of the stack
 * @counter: Line number in the Monty bytecode file
 *
 * Description: This function rotates the stack to the top.
 * If the stack is empty or has only one element, it does nothing.
 * It modifies the stack in place.
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *first, *last;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	first = *head;
	last = *head;

    /* Find the last node in the stack */
	while (last->next != NULL)
	{
		last = last->next;
	}

    /* Adjust pointers to rotate the stack to the top */
	last->next = first;
	first->prev = last;
	first->next->prev = NULL;
	*head = first->next;
	first->next = NULL;
}
