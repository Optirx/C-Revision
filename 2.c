#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Year;
    printf("Enter the Year : ");
    scanf("%d",&Year);

    if((Year%4 == 0 && Year % 100 >0) || Year % 400 ==0)
    {
        printf("%d --> Leap year",Year);
    }
    else
    {
        printf("%d -->  Not a leap year",Year);

    }
    return 0;
}
