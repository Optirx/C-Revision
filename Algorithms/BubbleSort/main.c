#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Num 7



int main()
{
    int arr[Num];
    printf("Please Enter 7 Elements\n");
    for (int i = 0; i < Num; i++)
    {
        scanf("%d",&arr[i]);
    }
    BubbleSort(arr);
    Printing(arr);
    return 0;
}


int BubbleSort(int arr[])
{
    int swap;

    for(int i =0; i < Num-1; i++)
    {
        for(int j=0; j< Num-i-1; j++ )
        {
            if(arr[j] > arr[j+1])
            {
                swap =arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =swap;
            }
        }
    }

    return arr;
}

void Printing(int arr[])
{
     for (int i = 0; i < Num; i++)
    {
        printf("%d ",arr[i]);
    }

}
