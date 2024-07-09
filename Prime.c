#include <stdio.h>
#include <string.h>
int main ()
{
    int num;
    int flag = 0;
    printf ("Enter thr number : ");
    scanf ("%d",&num);
  //  int res = num % 1;
   // printf ("\n %d is tge value of %d / 1",res,num);
   if (num == 0|| num == 1)
   {
    flag = 1;
   }
   for (int i = 2; i <= num/2; i++)
   {
    /* code */
    if (num % i == 0)
    {
        flag = 1;
        break;
    }
    
   }
   
     if(flag == 0)
    {
        printf (" \n%d is a prime number ",num);
    }
    else
    {
        printf ("\n %d is not a prime number",num);
    }
    return 0;
}