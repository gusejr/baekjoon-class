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

void init(Queue* queue);
int is_empty(Queue* queue);
void enqueue(Queue* queue, int number);
int dequeue(Queue* queue);