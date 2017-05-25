#include <stdio.h>
#include <stdlib.h>
#include "include/tree.h"
#include "stddef.h"
void print_sorted_tree(TREE tr)
{
    if (tr == NULL) return;
    print_sorted_tree(tr->lchild);
    printf("%d \n", tr->element);
    print_sorted_tree(tr->rchild);
}
tnode find_min(TREE tr)
{
   tnode np;
    np = tr;
    if (np == NULL) return NULL;
    while(np->lchild != NULL) {
        np = np->lchild;
    }
    return np;
}
tnode find_max(TREE tr)
{
    tnode np;
    np = tr;
    if (np == NULL) return NULL;
    while(np->rchild != NULL) {
        np = np->rchild;
    }
    return np;
}
tnode find_value(TREE tr,int value) 
{
    if (tr == NULL) return NULL; 

    if (tr->element == value) {
        return tr;
    }
    else if (value < tr->element) {
        return find_value(tr->lchild, value);
    }
    else {
        return find_value(tr->rchild, value);
    }
}
int  delete_node(tnode np) 
{
    tnode replace;
    int  element;
    if (is_leaf(np)) {
        return delete_leaf(np);
    }   
    else{
        replace = (np->lchild != NULL) ? find_max(np->lchild) : find_min(np->rchild);
        element = np->element;
        np->element = delete_node(replace);
        return element;
    }
}
tnode insert_value(TREE tr,int value) {
    tnode np;
    np =(tnode) malloc(sizeof(struct node));
    np->element = value;
    np->parent  = NULL;
    np->lchild  = NULL;
    np->rchild  = NULL;
 
    if (tr == NULL) tr = np;
    else {
        insert_node_to_nonempty_tree(tr, np);
    }
    return tr;
}
static int is_root(tnode np)
{
    return (np->parent == NULL);
}
static int is_leaf(tnode np)
{
    return (np->lchild == NULL && np->rchild == NULL);
}
static int delete_leaf(tnode np)
{
    int element;
    tnode parent;
    element = np->element;
    parent  = np->parent;
    if(!is_root(np)) {
        if (parent->lchild == np) {
            parent->lchild = NULL;
        }
        else {
            parent->rchild = NULL;
        }
    }
    free(np);
    return element;
}
static void insert_node_to_nonempty_tree(TREE tr,tnode np)
{
 
    if(np->element <= tr->element) {
        if (tr->lchild == NULL){ 
            tr->lchild = np;
            np->parent = tr;
            return;
        }
        else {
            insert_node_to_nonempty_tree(tr->lchild, np);
        }
    }
    else if(np->element > tr->element) {
               if (tr->rchild == NULL) {
                      tr->rchild = np;
                      np->parent = tr;
                      return;
              }
        else {
            insert_node_to_nonempty_tree(tr->rchild, np);
        }
    }
}
