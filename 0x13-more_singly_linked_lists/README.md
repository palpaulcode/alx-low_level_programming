# 0x13 C - More singly linked lists
This directory contains solutions to coding tasks from the aforementioned section in the C course within the ALX_SE curriculum

## File `0-print_listint.c`
This file contains a function that prints all the elements of a `listint_t` list.
* Prototype: `size_t print_listint(const listint_t *h);`
* Return: the number of nodes

## File `1-listint_len.c`
This file contains a function that returns the number of elements in a linked `listint_t` list.
* Prototype: `size_t listint_len(const listint_t *h);

## File `2-add_nodeint.c`
This file contains a function that adds a new node at the beginning of a `listint_t` list.
* Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

## File `3-add_nodeint_end.c`
This file contains a function that adds a new node at the end of a `listint_t` list.
* Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

## File `4-free_listint.c`
This file contains a function that frees a `listint_t` list.
* Prototype: `void free_listint(listint_t *head);`

## File `5-free_listint2.c`
This file contains a function that frees a `listint-t` list.
* Prototype: `void free_listint2(listint_t **head);`
* The function sets the `head` to `NULL`

## File `6-pop_listint.c`
This file contains a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).
* Prototype: `int pop_listint(listint_t **head);`
* if the linked list is empty return `0`;


