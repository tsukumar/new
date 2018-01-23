#include <stdio.h>
#include <math.h>
void main()
{
int n, sum = 0, r = 0, c = 0, t;
printf ("enter a number");
scanf("%d", &n);
t = n;
while (n != 0)
{r = n % 10;
c = pow(r, 3);
sum = sum + c;
n = n / 10;}
if (sum == t)
printf ("yes");
else
printf ("no");
}


