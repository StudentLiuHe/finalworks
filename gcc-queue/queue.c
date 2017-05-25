#include <stdio.h>
#include <stdlib.h>
#include "include/queue.h"
#include "stddef.h"
void  Initqueue()
{
	Q.front=Q.rear=(queueptr)malloc(sizeof(Qnode));
	if(!Q.front)
	   return ;
	Q.front->next=NULL;
	
}
void Destroyqueue()
{
	while(Q.front)
	{
		Q.rear=Q.front->next;
		free(Q.front);
		Q.front=Q.rear;
	}
}
int dequeue()
{	
	if(is_empty())
		return 0;
	Qnode *p=NULL;
	p=Q.front->next;
	int e;
	e=p->data;
	Q.front->next=p->next;
	if(Q.rear==p)
		Q.rear=Q.front;
	free(p);
	return e;
}
int is_empty()
{
	if(Q.front==Q.rear)
		return 1;
	else 
		return 0;
}
int gethead()
{
	if(is_empty())
	{
		return 0;
	}
	Qnode *p=NULL;
	p=Q.front->next;
	int e;
	e=p->data;
	return e;
}	
void enqueue(int e)
{
	Qnode *p=NULL;
	p=(queueptr)malloc(sizeof(Qnode));	
	if(!p)
	{
		exit(0);
	}
	p->data=e;
	p->next=NULL;
	Q.rear->next=p;
	Q.rear=p;
}
int queuetraverse()
{
	Qnode *p=NULL;
        int i=0;
	p=Q.front->next;
	while(p!=Q.rear)
	{	
		printf("%d ",p->data);
		p=p->next;
		i=i+1;
	}
	printf("%d\n",p->data);
	printf("the length of the queue %d\n",i+1);
	return i+1;
}

		
			
	
