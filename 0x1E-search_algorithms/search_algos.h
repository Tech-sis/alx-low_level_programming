#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* helpers */
void print_array(int *array, size_t inc, size_t size);
/**
 * struct skiplist_s - Node of a skip list
 * @n: Integer stored in the node
 * @index: Index of the node in the list
 * @next: Pointer to the next node in the level
 * @express: Pointer to the next node in the express level
 * Description: Node of a sorted singly linked list of integers
 * for Holberton project
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;
/**
 * struct listint_s - doubly linked list node
 * @n: integer stored in the node
 * @index: pointer to the previous element of the list
 * @next: pointer to the next element of the list
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
