#include <stdio.h>
#include <stdlib.h>
#include "include/mergelist.h"
int main(void)
{
	Initlist();
	printf("%d %d\n",L.length,L.listsize);
	int a[5]={1,2,3,4,5};
	int i,j;
	for(i=0;i<5;i++)
	{
		j=Insertlist(a[i]);
		if(j==0)
		{
			printf("Error\n");
		}
	}
	printf("numbers in the list are: "); 
	play();
	printf("\n");
	j=Deletelist(2);
	printf("after delete the numbers in list are: ");
	play();
	//test locate
	j=Locatelist(6);
	if(j==0)
		printf("\nnot found\n");
	else{
		printf("%d\n",j);
	}
	j=Locatelist(3);
        if(j==0)
		printf("\nnot found\n");
	else{
		printf("the index is %d\n",j);
	}

}
