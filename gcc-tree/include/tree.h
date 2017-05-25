#ifndef _CALC_H
#define _CALC_H
typedef struct node *tnode;
struct node {
    tnode parent;
    int  element;
    tnode lchild;
    tnode rchild;
};
typedef struct node *TREE;
void print_sorted_tree(TREE);
tnode find_min(TREE);
tnode find_max(TREE);
tnode find_value(TREE,int);
tnode insert_value(TREE,int);
int delete_node(tnode);
static int is_root(tnode);
static int is_leaf(tnode);
static int delete_leaf(tnode);
static void insert_node_to_nonempty_tree(TREE,tnode);
#endif //_CALC_H
