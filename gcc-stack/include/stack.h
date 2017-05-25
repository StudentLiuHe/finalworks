#ifndef _CALC_H
#define _CALC_H
typedef struct node *posnext;
typedef struct node *Stack;
struct node{
	int element;
	posnext next;
};
Stack s;
Stack Initlist();
void Destroystack();
int pop();
int is_empty();
int gettop();
void push(int e);
#endif //_CALC_H
