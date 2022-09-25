#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[4];
    int min,max;
    printf("Enter Four Numbers :\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&arr[i]);
    }

    MaxMin(arr,&max,&min);
    printf("Minimum element %d - Maximum element %d",min,max);

    return 0;
}

void MaxMin(int arr[],int *max,int *min)
{
    *max = arr[0];
    *min = arr[0];
    for (int i = 0; i < 4; i++)
    {
        if(*max <= arr[i])
           *max =arr[i];
        else if(*min >= arr[i])
           *min =arr[i];
    }


}


