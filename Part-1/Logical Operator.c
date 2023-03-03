// Program to demonstrate the Logical Operator in C
#include <stdio.h>
#include <conio.h>
 int main ()
{
 // declare variable
 int n = 20;

 // use Logical AND (&&) operator to check the condition
 printf (" %d \n", (n == 20 && n >= 8)); // condition is true, therefore it returns 1
 printf (" %d \n", (n >= 1 && n >= 20));
 printf (" %d \n", (n == 10 && n >= 0));
 printf (" %d \n", (n >= 20 && n <= 40));

 return 0;
} 

/*  1 
 1 
 0 
 1  */