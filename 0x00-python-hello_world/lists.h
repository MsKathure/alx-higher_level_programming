#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - Node of a singly linked list
 * @n: Integer data
 * @next: Pointer to the next node
 *
 * Description: Node structure for a singly linked list.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * print_listint - Prints all elements of a linked list.
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint(const listint_t *h);

/**
 * add_nodeint - Adds a new node at the beginning of a list.
 * @head: Pointer to the pointer to the head of the list
 * @n: Integer data for the new node
 *
 * Return: Pointer to the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n);

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the head of the list
 */
void free_listint(listint_t *head);

/**
 * check_cycle - Checks if a linked list contains a cycle.
 * @list: Pointer to the head of the list
 *
 * Return: 1 if there is a cycle, 0 otherwise.
 */
int check_cycle(listint_t *list);

#endif /* LISTS_H */

