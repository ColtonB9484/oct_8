#include <stdio.h>
#include "recursion.h"

int power(int base, int exp) {
	if (exp <= 0) return 1;
	return base * power(base, exp - 1);
}

void print_range(int n) {
	if(n <= 1) {
		printf("%d ", n);
	}
	else {
		print_range(n - 1);
		printf("%d ", n);	
	}
}

int add(int a, int b) {
	return a + b;
}

int multiply(int a, int b) {
	return a * b;
}

int apply(int a, int b, operation op) {
	return op(a, b);
}
