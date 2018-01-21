#include<stdio.h>
void main()
{
char s[100];
int i=0,j=-1,flag=0;
printf("Enter a string: ");
scanf("%s",s);
while(s[++j]!='\0');
j--;
while(i<j)
if(s[i++] != s[j--])
{
flag=1;
break;
}
if(flag == 0)
printf("The string is a palindrome");
else
printf("The string is not a palindrome");
}
 
