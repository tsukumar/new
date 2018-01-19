#include <stdio.h>
void main()
{
    int d, j, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&d);

    for(j=1; j <= d; ++j)
    {
        sum =sum+ j; 
    }
    printf("Sum = %d",sum);

 
}
