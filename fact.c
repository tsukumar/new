#include<stdio.h>
void main()
{
int i, n, f=1;
printf("Enter the any no. : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("Factorial =%d ",f);
}
