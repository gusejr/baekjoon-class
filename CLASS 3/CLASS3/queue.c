#include <stdio.h>
#include <stdlib.h>
// linked queue
typedef struct Node 
{
	struct Node* next;
	int node_number;
}Node;
typedef struct Queue
{
	struct Node* front;
	struct Node* rear;
	int queue_size;
}Queue;
void init(Queue* queue)
{
	queue->front = NULL;
	queue->rear = NULL;
	queue->queue_size = 0;
}
int is_empty(Queue* queue)
{
	if (queue->queue_size == 0)
	{
		return 1;
	}
	return 0;
}
void enqueue(Queue* queue, int number)
{
	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode->next = NULL;
	newnode->node_number = number;
	if (is_empty(queue))
	{
		queue->front = newnode;
		queue->rear = newnode;
		queue->queue_size++;
		return;
	}
	queue->rear->next = newnode;
	queue->rear = newnode;
	queue->queue_size++;
}
int dequeue(Queue* queue)
{
	int first = queue->front->node_number;
	queue->front = queue->front->next;
	queue->queue_size--;
	return first;
}


