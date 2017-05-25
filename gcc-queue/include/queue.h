#ifndef _CALC_H
#define _CALC_H
typedef struct node{
	int data;
	struct node  *next;
}Qnode,*queueptr;
typedef struct {
	queueptr front;
	queueptr rear;
}linkqueue;
linkqueue Q;
void Initqueue();
void Destroyqueue();
int dequeue();
int is_empty();
int gethead();
void enqueue(int e);
int queuetraverse();
#endif //_CALC_H
