#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>

struct base_t{
    int     id;
    char    name[10];
};

int pass_arg_int_by_value(int);
int pass_arg_int_by_reference(int *);

int pass_arg_ptr_int_by_value(int *);
int pass_arg_ptr_int_by_reference(int **);

//int pass_arg_struct(struct base_t );
//int pass_arg_ptr_struct(struct base_t *);

#endif
