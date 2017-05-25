#include "include/mergelist.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "stddef.h"
void Initlist()
 {
    L.elem=(int*)malloc(10*sizeof(int));
    if(!L.elem){
      return ;
      }
    L.length=5;
    L.listsize=10;
 }
 int Insertlist(int e)
 {
      
       int *q = L.elem;
        while(*q!=0)
            q++;
       *q=e;
       ++L.length;
       return 1;
  }
  int Deletelist(int i)
  {
      if((i<1)||(i>L.length))
          return 0;
      int *p,*q,e;
      p=L.elem+(i-1);
      e=*p;
      q=L.elem+L.length-1;
      for(++p;p<=q;++p)
      {
          *(p-1)=*p;
      }
      --L.length;
      return 1;
 }
 int Locatelist(int e)
 {
    int i=1;
    int *p;
    p=L.elem;
    while(i<=L.length&&e!=*(p++))
        ++i;
     if(i<=L.length)
         return i;
     return 0;
  }
void play()
{
	int i;
	for(i=0;i<L.length;i++)
	{
		printf("%d ",*(L.elem+i));
	}
}
	
