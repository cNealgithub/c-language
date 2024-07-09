/*#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf ("the no. of arguments are %d ",argc);
    for (int i = 0; i < argc; i++)
    {
        printf (" the value at index %d is : %s \n",i,argv[i]);
    }
    
    return 0;
}*/
#include <stdio.h>
#include <string.h>
int main ()
{
    char str[]="baby_is";
    char arr[]="baby_is";     
    int val = strcmp(str,arr);
    printf ("%d",val);
    return 0;
}
