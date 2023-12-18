#include "monty.h"

/**
 * f_pstr - Prints the string starting at the top of the stack, followed by a
 * new line.
 * @head: Pointer to the stack head
 * @counter: Line count
 *
 * This function checks each element of the stack and prints characters until
 * a non-printable or null character is encountered.
 * The function preserves the original functionality of printing the string
 * and adds comments for clarity.
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		/* Check if the character is a non-printable or null character */
		if (h->n <= 0 || h->n > 127)
		{
			break;
		}
		/* Print the character */
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
