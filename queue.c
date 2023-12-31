#include "monty.h"

/**
 * f_queue - Set the mode to queue (FIFO)
 * @head: Head of the queue (unused)
 * @counter: Line number (unused)
 *
 * Return: Nothing
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;  /* Set the queue mode */
}

/**
 * addqueue - Add a node to the queue
 * @head: Head of the queue
 * @n: New value to be added
 *
 * Return: Nothing
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: Unable to allocate memory\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
}
