#include "monty.h"

/**
 * f_pchar - Prints the character at the top of the stack, followed by a
 * new line.
 * @head: Pointer to the stack head
 * @counter: Line count
 *
 * This function checks if the stack is empty and if the value is within the
 * ASCII range.
 * If conditions are met, it prints the character at the top of the stack.
 * Otherwise, it exits with an error message.
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n < 0 || h->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", h->n);
}

