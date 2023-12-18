#include "monty.h"

/**
 * free_stack - Frees a doubly linked list (stack)
 * @head: Head pointer to the stack
 *
 * This function frees the entire doubly linked list.
 */
void free_stack(stack_t *head)
{
	stack_t *current, *next_node;

	current = head;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}

/**
 * f_stack - Placeholder function that sets a flag for stack mode
 * @head: Head of the stack (not used)
 * @counter: Line count (not used)
 *
 * This function is a placeholder that sets a flag for stack mode.
 * It doesn't perform any specific stack-related action.
 */
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;

	/* Set the flag indicating stack mode */
	bus.lifi = 0;
}
