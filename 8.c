#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[10]= "Welcome";
    char str2[10];

    for(int i =0; i<sizeof(str1); i++)
    {
        str2[i] = str1[i];
    }
    printf("%s",str2);
    return 0;
}
