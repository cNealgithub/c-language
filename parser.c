#include <stdio.h>
#include <string.h>
//function for parsing the HTML tag:
void parser(char*string)
{
    int in = 0;
    int index = 0;
    int count = strlen(string);
    for (int i = 0; i < count; i++)
    {
        if(string[i] == '<')
        {
            in =1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if( in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    while(string[0] == ' ')
    {
        for (int i = 0; i < count; i++)
        {
            string[i] = string[i+1];
        }  
    }
    printf("%d\n",count);
    while(string[strlen(string)-1] == ' ')
    {
        string[strlen(string)-1] = '\0';
    }
}
int main ()
{
    char string[] = "<h1>            My name is Riya                 <h2>";
    parser (string);
    printf ("this is the parsed string  :- ");
    printf ("~%s~",string);
    return 0;
}