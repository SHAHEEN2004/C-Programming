// Check ARMSTRONG NUMBER of three digits
#include <stdio.h>
int main() {
 int num, originalNum, remainder, result = 0;
 printf("Enter a three-digit integer: ");
 scanf("%d", &num);


originalNum = num;
 while (originalNum != 0) {
 // remainder contains the last digit
 remainder = originalNum % 10;

 result += remainder * remainder * remainder;

 // removing last digit from the orignal number
 originalNum /= 10;
 }
 if (result == num)
 printf("%d is an Armstrong number.", num);
 else
 printf("%d is not an Armstrong number.", num);
 return 0;
}
// 1*1*1=1 8*8*8=128 1*1*1=1 = 131
/* Enter a three-digit integer: 181
181 is not an Armstrong number. */

//3*3*3=27 7*7*7=343 1*1*1=1 =371
/* Enter a three-digit integer: 371
371 is an Armstrong number. */


