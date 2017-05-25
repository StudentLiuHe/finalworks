#include <stdio.h>
#include <stdlib.h>
#include "include/stack.h"
#include "stddef.h"
Stack Initstack()
{
	posnext p;
	p=(posnext) malloc(sizeof(struct node));
	p->next=NULL;
        s=p;
	return s;
}
void Destroystack()
{
	while(!is_empty())
		pop();
 	free(s);
}
int pop()
{
	int element;
	posnext top,newtop;
	if(is_empty()){
		printf("the stack is empty");
		return 0;
	}
	else{
	top = s->next;
	element=top->element;
	newtop = top->next;
        s->next = newtop;
        free(top);
        return element;
    }
}
int is_empty()
{
       if(s->next==NULL)	
	  return 1;
       else 
	return 0;
}
int gettop()
{	
	return(s->next->element);
}
void push(int e)
{
	posnext p,oldtop;
	oldtop=s->next;
	p = (posnext) malloc(sizeof(struct node));
        p->element = e;
        p->next = s->next;
        s->next = p;
}
 

	
	
