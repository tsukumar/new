#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the number:");
scanf("%d",&a);
printf("enter the number:");
scanf("%d",&b);
printf("enter the number:");
scanf("%d",&c);
if(a>b&&a>c)
{
printf("%d is the largest number",a);
}
else
{
printf("%d is the largest number",b);
}
if(c>b)
{
printf("%d is the largest number",c);
}
else
{
printf("%d is the largest number",b);
}
}
