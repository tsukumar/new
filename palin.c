#include<stdio.h>
int main()
{
int n,rem,rev=0,a;
printf("enter the number");
scanf("%d",&n);
a=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(a==rev)
{
printf("%d is palindrome",n);
}
else
{
printf("%d is not a palindrome",n);
}
return 0;
}
