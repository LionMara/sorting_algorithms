#ifndef SORT_H
#define SORT_H

/* LIBRARIES */
#include <stdlib.h>
#include <stdio.h>

/* Doubly linked structure */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: integer stored
 * @prev: pointer to previous element
 * @next: pointer to next element
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
}listint_t;


/* protototype functions for already given funcs */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* main prototype functions */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);


#endif
