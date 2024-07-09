#include <stdio.h>

void sum(int a,int b)
{
    int sum = a+b;
    printf (" The sum is : %d",sum);
}
void substract(int a,int b)
{
    int sub = a-b;
    printf (" The substracted value is : %d",sub);
}
void product(int a,int b)
{
    int prod = a*b;
    printf (" The product is : %d",prod);
}
void division(int a,int b)
{
    int div = a/b;
    printf (" The divided value is : %d",div);
}
int main ()
{
    int a,b,operation;
    start:
    printf ("\n~~~~~~~~~~CALCULATOR~~~~~~~~~~\n");
    printf ("\t Press 1 for Addition\n");
    printf ("\t Press 2 for Substraction\n");
    printf ("\t Press 3 foe Multiplicatiom\n");
    printf ("\t Press 4 for Division\n");
    printf ("\t press 5 to quit\n");
    scanf("%d",&operation);
    if( operation == 1)
    {
        printf("  ADDITION  \n");
        printf("Enter the first no. : ");
        scanf("%d",&a);
        printf("Enter the second no. : ");
        scanf("%d",&b);
        sum(a,b);
        goto start;
    }
    else if(operation == 2)
    {
        printf("   SUBSTRACTION   \n");
        printf("Enter the first no. : ");
        scanf("%d",&a);
        printf("Enter the second no. : ");
        scanf("%d",&b);
        substract(a,b);
        goto start;
    }
    else if (operation == 3)
    {
        printf("   multiplication   \n");
        printf("Enter the first no. : ");
        scanf("%d",&a);
        printf("Enter the second no. : ");
        scanf("%d",&b);
        product(a,b);
        goto start;
    }
    else if (operation == 4)
    {
         printf("   DIVISION   \n");
         printf (" NOTE : enter the greater number first\n");
        printf("Enter the first no. : ");
        scanf("%d",&a);
        printf("Enter the second no. : ");
        scanf("%d",&b);
        division(a,b);
        goto start;
    }
    else if (operation == 5)
    {
        printf ("quitting the program");
        goto end;
    }
    else
    {
        printf ("Invalid input");
    }
    end:
    return 0;
}
