// C program to demonstrate working of binary ARITHMETIC OPERATORS
#include <stdio.h>
int main()
{
int a = 10, b = 4, res;
// printing a and b
printf("a is %d and b is %d\n", a, b);
res = a + b; // addition
printf("a+b is %d\n", res);
res = a - b; // subtraction
printf("a-b is %d\n", res);
res = a * b; // multiplication

printf("a*b is %d\n", res);
res = a / b; // division
printf("a/b is %d\n", res);
res = a % b; // modulus
printf("a%%b is %d\n", res);
return 0;
}   

/* 
a is 10 and b is 4
a+b is 14
a-b is 6
a*b is 40
a/b is 2
a%b is 2 */