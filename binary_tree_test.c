#include "binary_tree.h"
#include <stdio.h>

int main( int argc, char **argv )
{
    bin_tree_ptr t1 = NULL;
    t1 = bin_tree_insert( t1, 4.2 );
    t1 = bin_tree_insert( t1, 1.0 );
    t1 = bin_tree_insert( t1, 10.9 );
    printf( "sum: %f\n", bin_tree_sum( t1 ) );
    printf( "contains A: %d\n", bin_tree_contains( t1, 5.0, 0.1 ) );
    printf( "contains B: %d\n", bin_tree_contains( t1, 5.0, 1.0 ) );
    bin_tree_delete( t1 );
    return 0;
}