#include <stdio.h>
#include <stdlib.h>


int main()
{
    int size,odd=0,even=0;

    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the %d element in array :\n",size);


    for(int i =0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if(arr[i]%2 == 0)
           even++;
        else
           odd++;
    }

    printf("Even elements : %d\nOdd Number : %d",even,odd);



    return 0;
}
