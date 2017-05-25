#include <stdio.h>
#include <stdlib.h>
#include "include/stack.h"
void main()
{
	int a;
	int i;
	s=Initstack();
	push(1);
        push(2); 
        push(4);
	printf("Stack is empty? %d\n", is_empty());
	while(!is_empty())
	{
		printf("%d ",gettop());
		pop();
        }
       printf("\nStack is empty? %d\n",is_empty());
	push(3);
	push(6);
	printf("Stack is empty? %d\n",is_empty());
        Destroystack();
       printf("Stack is empty? %d\n",is_empty());
}
