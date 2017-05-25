#ifndef _CALC_H
#define _CALC_H
typedef struct{
  int *elem;
  int length;
  int listsize;
 }list;
list L;
void Initlist();
int Insertlist(int e);
int Deletelist(int i);
int Locatelist(int e);
void play();
#endif //_CALC_H
