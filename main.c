#include <stdio.h>
#include "recursion.h"

int main(void) {
	printf("5 ^ 2 = %d\n", power(5, 2));
	printf("3 ^ 3 = %d\n", power(3, 3));

	printf("Print range test:\n");
	print_range(5);
	printf("\n");
	print_range(3);
	printf("\n");

	printf("Function Pointer Test:\n");
	printf("Add 4, 5: %d\n", apply(4, 5, add));
	printf("Multiply 4, 5: %d\n", apply(4, 5, multiply));
	

	return 0;
}
