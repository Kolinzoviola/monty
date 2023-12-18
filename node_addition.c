#include "monty.h"

/**
 * addnode - Adds a new node to the head of the stack
 * @head: Pointer to the head of the stack
 * @n: New value to be added to the node
 *
 * This function creates a new node with the specified value and adds it to
 * the head of the stack
 */
void addnode(stack_t **head, int n)
{
	stack_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: Unable to allocate memory for a new node\n");
		exit(EXIT_FAILURE);
	}

	/* Initialize the new node */
	new_node->n = n;
	new_node->prev = NULL;

	/* Link the new node to the existing stack */
	if (*head)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	else
	{
		new_node->next = NULL;
	}

	/* Update the head to point to the new node */
	*head = new_node;
}
