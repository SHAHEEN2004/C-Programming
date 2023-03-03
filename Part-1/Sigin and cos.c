// Program to calculate the value of sin(x) and cos(x) using Expansion
#include <iostream>
#include <math.h>
using namespace std;
// Function for calculating sin value
void cal_sin(float n)
{
float accuracy = 0.0001, denominator, sinx, sinval;
// Converting degrees to radian
n = n * (3.142 / 180.0);
float x1 = n;
// maps the sum along the series
sinx = n;
// holds the actual value of sin(n)
sinval = sin(n);
int i = 1;
do
{
denominator = 2 * i * (2 * i + 1);
x1 = -x1 * n * n / denominator;
sinx = sinx + x1;
i = i + 1;
} while (accuracy <= fabs(sinval - sinx));
cout << sinx;
}
// Main function
int main()
{
float n = 90;
cal_sin(n);
return 0;
}

/* 1 */