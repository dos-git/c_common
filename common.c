#include "common.h"

int
pass_arg_int_by_value(int x)
{
    x++;
}

int
pass_arg_int_by_reference(int *x)
{
    (*x)++;
}

int
pass_arg_ptr_int_by_value(int *y)
{
    (*y)++;         // <= modify pointer value
    //y++;          // <= modify pointer address
}

int
pass_arg_ptr_int_by_reference(int **y)
{
    // *y  - access to pointer
    // **y - access to value keep by pointer
    (**y)++;
}
