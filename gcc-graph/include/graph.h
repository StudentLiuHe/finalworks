#ifndef _CALC_H
#define _CALC_H
typedef struct node *pos;
struct node {
    int element;
    pos next;
};
void insert_edge(pos, int, int);
void print_graph(pos graph, int nv);
#endif //_CALC_H
