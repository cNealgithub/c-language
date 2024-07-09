#include<stdio.h>
int palindrome(int a)
{
    int b=0;
    while(a!=0)
    {
        int r=a%10;
        b=b*10+r;
        a=a/10;
    }
    return b;
}
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
   int pal=palindrome(num);
    if(pal==num)
    printf("%d is a palindrome number ",num);
    else
    printf("%d is not a palindrome number ",num);
    return 0;
}