#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,power,result=1;

    printf("Enter the Number : ");
    scanf("%d",&num);
    printf("Enter the Power : ");
    scanf("%d",&power);


    for (int i = 0; i < power; i++)
    {
        result = result *num;
    }

    printf("Result = %d",result);
    return 0;
}
