#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num,Zero=0,One=0;


    printf("Enter a Number : \n");
    scanf("%d",&Num);

    while (Num / 2 !=0)
    {
        if(Num % 2 == 0)
            Zero ++;
        else
            One++;

         Num = Num /2;
    }
    One++;

    printf("Zero bits is : %d\nOne bits is :%d ",Zero,One);


    return 0;
}
