#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 10000
int stack[MAX_SIZE];
int top = -1;

int is_full()
{
	if (top >= MAX_SIZE - 1)
	{
		return 1;
	}
	return 0;
}
int is_empty()
{
	if (top == -1)
	{
		return 1;
	}
	return 0;
}
void push(int data)
{
	if (!is_full())
	{
		stack[++top] = data;
	}
}
int pop()
{
	if (!is_empty())
	{
		return stack[top--];
	}
}
int main()
{
	int times = 0, input_push_num = 0;
	char order[10];
	scanf_s("%d", &times);
	for (int i = 0; i < times; i++)
	{
		scanf_s("%s", &order);
		if (strcmp("push", order) == 0)
		{
			scanf_s("%d", &input_push_num);
			push(input_push_num);
		}
		else if (strcmp("pop", order) == 0)
		{
			if (top == -1)
			{
				printf("%d\n", top);
			}
			else
			{
				printf("%d\n", pop());
			}
		}
		else if (strcmp("size", order) == 0)
		{
			printf("%d\n", top + 1);
		}
		else if (strcmp("empty", order) == 0)
		{
			if (top == -1)
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
		else // top
		{
			if (top == -1)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", stack[top]);
			}
		}
	}
}