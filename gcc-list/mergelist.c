#include "include/mergelist.h"
#define MAX 10
typedef struct{
  int *elem;
  int length;
  int listsize;
 }list;
 list Initlist(list p)
 {  
    p.elem=(int*)malloc(MAX*sizeof(int));
    if(!p.elem){
      exit(OVERFLOW);
      }
    p.length=0;
    p.listsize=MAX;
 }
 int Insertlist(list L,int i,int e)
 {  
      if(i<1||i>L.length+1)
           return 0;
       int *q = L.elem[i-1];
       int *p;
       for(p=L.elem[L.length-1];p>=q;p--)
            *(p+1)=*p;
       *q=e;
       ++L.length;
       return 1;
  }
  int Deletelist(list L,int i)
  {
      if((i<1)||(i>L.length))
          return 0;
      int *p,*q,e;
      p=L.elem[i-1];
      e=*p;
      q=L.elem+L.length-1;
      for(++p;p<=q;++p)
      {
          *(p-1)=*p;
      }
      --L.length;
      return 1;
 }
 int Locatelist(list L,int e)
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
    
 
      
