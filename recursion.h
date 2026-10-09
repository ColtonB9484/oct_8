#ifndef RECURSION_H
#define RECURSION_H

int power(int base, int exp);
void print_range(int n);
int add(int a, int b);
int multiply(int a, int b);
typedef int (*operation)(int, int);
int apply(int a, int b, operation op);
#endif
