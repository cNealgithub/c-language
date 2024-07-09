#include <stdio.h>
#include <string.h>
int main ()
{
    int m,n,i,j,k;
    printf("    MATRIX MULTIPLICATION   \n");
    printf("Enter the no. of rows for Matrix A :");
    scanf("%d",&m);
    printf("Enter the no. of columns for Matrix A :");
    scanf("%d",&n);
    int arr[m][n];
    printf("   \nmow enter the elements\n ");
    for ( i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("     MATRIX A    \n");
    for ( i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("   %d   ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Now lets enter the elememnts of Matrix B\n");
    int p,q;
    printf("Enter the no. of rows for Matrix B :");
    scanf("%d",&p);
    printf("Enter the no. columns of Matrix B :");
    scanf("%d",&q);
    int brr[p][q];
     printf("   \nmow enter the elements\n ");
    for ( i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&brr[i][j]);
        }
        
    }
    printf("     MATRIX B    \n");
    for ( i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("   %d   ",brr[i][j]);
        }
        printf("\n");
    }
    if(m == q)
    {
        printf(" The resultant matrix \n");
        int crr[m][q];
        for ( i = 0; i < m; i++)
        {
            for(j = 0; j < q; j++)
            {
                crr[i][j] = 0;
                for(k = 0; k < q; k++)
                {
                    crr[i][j] = crr[i][j] + arr[i][k] * brr[k][j];
                }
            }
        }
        
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < q; j++)
            {
                printf("   %d   ",crr[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf(" the multiplication is not possible invalid input of row and column");
    }
    return 0;
}