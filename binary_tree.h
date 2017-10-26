#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct bin_tree_t bin_tree_t, *bin_tree_ptr;

struct bin_tree_t
{
    float value;
    bin_tree_ptr left, right;
};

bin_tree_ptr bin_tree_insert( bin_tree_ptr t, float v );
void bin_tree_delete( bin_tree_ptr t );
int bin_tree_contains( bin_tree_ptr t, float v, float epsilon );
float bin_tree_sum( bin_tree_ptr t );

#endif