#include <stdio.h>
#include "include/mergelist.h"
typedef struct{
  int *elem;
  int length;
  int listsize;
 }list;
int main(void)
{
	list L;
	Initlist(L);
	printf("%d %d\n",L.length,L.listsize);
	//test insertfunction
	int a[5]={1,2,3,4,5},i,j;
	for(i=0;i<5;i++)
	{
		j=Insertlist(L,i+1,a[i]);
		if(j==0)
		{
			printf("Error\n");
		}
	}
	for(i=1;i<=L.length;i++)
	{
		printf("%d ",*(L.elem[i]));
	}
	//test deletefunction
	printf("%d ",*(L.elem[2]));
	j=Deletelist(L,2);
	if(j==0)
	{
		printf("error!");
	}
	printf("%d \n",*(L.elem[2]));
	//test locate
	j=Locatelist(L,6);
	if(j==0)
		printf("not found\n");
	else{
		printf("%d\n",j);
	}
}
