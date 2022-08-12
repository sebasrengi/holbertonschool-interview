#include "lists.h"
/**
 * insert_node - Inserts a number into a sorted singly linked list.
 * @head: start of pointer
 * @number: new node
 * Return: address of the new element or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *NewNode;
	listint_t *CurrentNode;

	CurrentNode = *head;

	NewNode = malloc(sizeof(listint_t));

	if (NewNode)
	{
		NewNode->n = number;
		NewNode->next = NULL;
		if (*head == NULL || (*head)->n >= NewNode->n)
		{
			NewNode->next = *head;
			*head = NewNode;
		}
		else
		{
			while (CurrentNode->next != NULL &&
			CurrentNode->next->n < NewNode->n)
			{
				CurrentNode = CurrentNode->next;
			}
			NewNode->next = CurrentNode->next;
			CurrentNode->next = NewNode;
		}
		return (NewNode);
	}

	return (NULL);
}
