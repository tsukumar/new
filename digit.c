#include<stdio.h>
int main()
{
long long l;
int count=0;
printf("enter an integer:");
scanf("%11d",&l);
while(l!=0)
{
//n=n/10
l/=10;
++count;
}
printf("number of digits:%d",count);
}
