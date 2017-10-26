#include <stdlib.h>
#include "binary_tree.h"
//I was unaware I had to work with my partner until the end.
bin_tree_ptr bin_tree_insert( bin_tree_ptr t, float v )
{
    if( !t )
    {
        bin_tree_ptr new_t = (bin_tree_ptr)malloc( sizeof( new_t[ 0 ] ) );
        new_t->value = v;
        new_t->left = NULL;
        new_t->right = NULL;
        return new_t;
    }
    if( v < t->value )
    {
        t->left = bin_tree_insert( t->left, v );
    }
    else
    {
        t->right = bin_tree_insert( t->right, v );
    }
    return t;
}

void bin_tree_delete( bin_tree_ptr t )
{
    if( !t )
        return;
    bin_tree_delete( t->left );
    bin_tree_delete( t->right );
    free( t );
}

int bin_tree_contains( bin_tree_ptr t, float v, float epsilon )
{
    if( !t )
        return 0;
    float diff = v - t->value;
    if( -epsilon < diff && diff < epsilon )
        return 1;
    if( bin_tree_contains( t->left, v, epsilon ) )
        return 1;
    return bin_tree_contains( t->right, v, epsilon );
}

float bin_tree_sum( bin_tree_ptr t )
{
    if( !t )
        return 0;
    return t->value + bin_tree_sum( t->left ) + bin_tree_sum( t->right );
}