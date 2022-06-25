#ifndef _QUEUE_H
#define _QUEUE_H
#include <iostream>
struct el
{
	int sequence;
	el* next = NULL;
};
struct Queue
{
	el *head = NULL, * end = NULL;
};

void push(Queue& q, int d);
int pull(Queue& q);
void print(Queue& q);
bool isEmpty(Queue q);
void clear(Queue& q);
void change(Queue& q);
#endif