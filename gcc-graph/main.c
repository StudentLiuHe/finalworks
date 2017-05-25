#include <stdio.h>
#include <stdlib.h>
#include "stddef.h"
#include "include/graph.h"
#define NUM_V 5
void main()
{
    struct node graph[NUM_V];
    int i;

    for(i=1; i<NUM_V; i++) {
        (graph+i)->element = i;
        (graph+i)->next = NULL;
    }

    insert_edge(graph,1,3);
    insert_edge(graph,1,4);
    insert_edge(graph,2,3);
    insert_edge(graph,4,2);
    insert_edge(graph,4,3);

    print_graph(graph,NUM_V);
}
