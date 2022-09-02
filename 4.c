#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int num,calc,sum=0;

    printf("Enter the number : \n");
    scanf("%ld",&num);
    while (num / 10 != 0)
    {
        calc = num %10;
        sum +=  calc;
        num /= 10;

    }
    sum = sum +(num%10);

    printf("Sum of digits = %ld",sum);

    return 0;
}
