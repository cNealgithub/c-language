#include<stdio.h>

int main()
{
    int i,j,m,n;
    printf("enter the no. of rows : ");
    scanf("%d",&m);
    printf("enter the no. of columns : ");
    scanf("%d",&n);
    int arr[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("  %d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}