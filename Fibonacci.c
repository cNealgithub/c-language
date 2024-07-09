#include <stdio.h>
#include <string.h>
int main ()
{
    int num;
    int nextterm,firstterm=0,secondterm=1;
    nextterm = firstterm + secondterm;
    printf ("Enter the no till which you want the fibonacci series : ");
    scanf ("%d",&num);
    printf (" The series is : %d ,%d",firstterm,secondterm);
    for (int i = 0; i < num-1; i++)
    {
        printf(" ,%d",nextterm);
        firstterm = secondterm;
        secondterm = nextterm;
        nextterm = firstterm + secondterm;
    }
    
    return 0;
}