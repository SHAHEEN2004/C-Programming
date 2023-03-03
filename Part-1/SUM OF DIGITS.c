// C Program to SUM OF DIGITS
#include<stdio.h>
int main()
{
int n,sum=0,m;
printf("Enter a number:");
scanf("%d",&n);
while(n>0)
{
m=n%10;

sum=sum+m;
n=n/10;
}
printf("Sum is=%d",sum);
return 0;
}

//4+5+6=15
/* Enter a number:456
Sum is=15 */