// C program extracting DIGITS OF INTEGERS
#include <stdio.h>
#define MAX 100
// Function to print the digit of
// number N
void printDigit(int N)
{
// To store the digit
// of the number N
int arr[MAX];
int i = 0;
int j, r;
// Till N becomes 0
while (N != 0)
{
// Extract the last digit of N
r = N % 10;
// Put the digit in arr[]
arr[i] = r;
i++;
// Update N to N/10 to extract
// next last digit
N = N / 10;
}
// Print the digit of N by traversing
// arr[] reverse
for (j = i - 1; j > -1; j--) {
printf("%d ", arr[j]);
}
}
// Driver Code
int main()

{
int N = 3452897;
printDigit(N);
return 0;
}

//0+1=1 2+1=3 5+1=6 3+1+2=6 
