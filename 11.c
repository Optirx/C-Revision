#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,Binum,i,arr[100],n;


    printf("Enter a Number : ");
    scanf("%d",&num);
    i=0;
    printf("Enter the number of bit to check : ");
    scanf("%d",&n);


    while (num !=0)
    {
         Binum = num %2;
         arr[i] =Binum;
         num = num /2;
         i++;
    }


    printf("The %d th bit is set to %d",n,arr[n]);

    return 0;
}
