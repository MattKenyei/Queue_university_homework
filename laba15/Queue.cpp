#include "Queue.h"
void print(Queue& q)
{
	for (el* cur = q.head; cur != NULL; cur = cur->next)
		printf("%i - ", cur->sequence);
	printf("\b\b \n");
}
bool isEmpty(Queue q)
{
		return q.head == NULL;
}
void push(Queue& q, int d)
{
	el* e = (el*)malloc(sizeof(el));
	e->sequence = d;
	e->next = NULL;
	
	if (q.head == NULL)
	{
		q.end = e;
		q.head = e;
	}
	else
	{
		q.end->next = e;
		q.end = e;
	}
}
int pull(Queue& q)
{
	if (q.head == NULL)
		return 0;
	int d = q.head->sequence;
	if (q.head == q.end)
		q.end = NULL;
	el* e = q.head;
	q.head = q.head->next;
	free(e);
	return d;
}
void clear(Queue& q)
{
	while (!isEmpty(q))
		pull(q);
}
void change(Queue& q)
{
	for (el* cur = q.head; cur != NULL; cur = cur->next)
		cur->sequence = (char)cur->sequence;
	for (el* cur = q.head; cur != NULL; cur = cur->next)
		printf("%c", cur->sequence);
	printf("\n");
}