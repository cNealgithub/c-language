#include <stdio.h>
#include <string.h>
int main ()
{
    int arr[4] = {23,45,22,56};
    int*ptr=arr;
    printf("printing the array using normal method\n");
    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("The value at arr[%d] is %d\n",i,arr[i]);
    }
    printf("\n printing the array using pointer arithmetic\n");
    // for (int i = 0; i < 4; i++)
    // {
    //     /* code */
    //     printf("The value at arr[%d] is %d \n",i,*(ptr+i));
    // }
    printf("The value at arr[%d] is %d \n",0,*(ptr));
    printf("The value at arr[%d] is %d \n",1,*(ptr+1));
    printf("The value at arr[%d] is %d \n",2,*(ptr+2));
    printf("The value at arr[%d] is %d \n",3,*(ptr+3));
    return 0;
}