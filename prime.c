#include<stdio.h>
void main( )
{
int x,i,y=0;
printf("Enter the number: ");
scanf("%d",&x);
for(i=2;i<x;i++)
{
if(x%i==0)
{
y=1;
break;
}
}
if(y==0)
printf("yes");
else
printf("no");
}
