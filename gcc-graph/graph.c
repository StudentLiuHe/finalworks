#include <stdlib.h>
#include "stddef.h"
#include "include/graph.h"
void print_graph(pos graph, int nv) {
    int i;
    pos p;
    for(i=1; i<nv; i++) {
        p = (graph + i)->next;
        printf("From %d: ",i);
        while(p != NULL) {
            printf("%d->%d; ", i, p->element);
            p = p->next;
        }
        printf("\n");
    }
}
void insert_edge(pos graph,int from, int to)
{
    pos np;
    pos nodeAdd;

    np = graph + from;

    nodeAdd = (pos) malloc(sizeof(struct node));
    nodeAdd->element = to;
    nodeAdd->next    = np->next;
    np->next = nodeAdd;
}
