#include <stdio.h>
#include <stdlib.h>
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>
#include "stddef.h"
#include "include/tree.h"
void main(void) 
{
    TREE tr;
    tnode np;
    int element;
    tr = NULL;
    tr = insert_value(tr, 8);
    tr = insert_value(tr, 5);
    tr = insert_value(tr, 2); 
    tr = insert_value(tr, 7);
    tr = insert_value(tr, 1);
    tr = insert_value(tr, 10);
    printf("Original:\n");
    print_sorted_tree(tr);
    np = find_value(tr, 8);
    if(np != NULL) {
        delete_node(np);
        printf("After deletion:\n");
        print_sorted_tree(tr);
    }
}
