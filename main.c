#include "common.h"

int
main(int argc, char **argv)
{
	int a = 5;
	int *y = NULL;
	int c = 70;

	//   cast		 allocate memoty for an integer
	//y = (int *)malloc(sizeof(int));
	//(*y) = 10;
	y = &c;

	pass_arg_int_by_value(a);
	printf("int by value     a : [%d]\n", a);
	pass_arg_int_by_reference(&a);
	printf("int by reference a : [%d]\n", a);


	// pointer by value??
	pass_arg_ptr_int_by_value(y);
	printf("pointer by value	y : [%d]\n", (*y));

	pass_arg_ptr_int_by_reference(&y);
	printf("pointer by reference 	y : [%d]\n", (*y));

	//free(y);
	return 0;
}
