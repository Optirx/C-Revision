#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long int Binum1,Binum2;
    int calc,desi=0,i=0;
    printf("Enter a Binary number : ");
    scanf("%ld",&Binum1);
    Binum2 =Binum1;
    while (Binum1 != 0)
    {
        calc = Binum1 %10;
        Binum1 /=10;
        desi =desi + calc *(pow(2,i));
        i=i+1;
    }
    printf("%ld in binary --> %d in decimal",Binum2,desi);
    return 0;
}
