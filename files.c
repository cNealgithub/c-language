#include<stdio.h>
int main()
{
    char string[70];//="this is my file for checking";
    FILE*ptr=NULL;
    ptr=fopen("text.txt","r");
   //fprintf(ptr,"%s",string);
   fscanf(ptr,"%s",string);
   printf("the content of the file is : %s",string);
   fclose(ptr);
    return 0;
}