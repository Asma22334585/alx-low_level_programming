#include "lists.h"
/**
  * sum_listint - sums all elements of a list
  * @head: pointer
  * Return: int
  */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
