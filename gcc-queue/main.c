#include <stdio.h>
#include <stdlib.h>
#include "include/queue.h"
void main()
{
	int i;
	Initqueue();
	printf("the queue is empty? %d\n",is_empty());
	enqueue(1);
	enqueue(2);
	enqueue(4);
	printf("the queue is empty? %d\n",is_empty());
	printf("the length of queue is :%d\n",queuetraverse());
	printf("top number in the queue is %d\n",gethead());
	printf("dequeue number is %d\n",dequeue());
	Destroyqueue();
	printf("the queue is empty? %d\n",is_empty());
}
