#include<stdio.h>

int main()
{
    int num,fact=1;
    printf("Enter the number you want the factorial of : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
      fact=fact*i;
    }
    printf("\n The factorial of %d is %d",num,fact);
    return 0;
}