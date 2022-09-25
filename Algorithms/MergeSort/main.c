#include <stdio.h>
#include <stdlib.h>





int main()
{
    int rArr[5]={1,4,6,9,15};
    int lArr[4]={2,5,8,10};
    int rSize = sizeof(rArr)/sizeof(int);
    int lSize = sizeof(lArr)/sizeof(int);
    int n = rSize + lSize;
    int arr[n];
    mSort(arr,rArr,lArr,rSize,lSize);


    return 0;
}

void mSort(int arr[],int rArr[],int lArr[],int rSize,int lSize)
{
    int i,j,k =0;
    int n = rSize+lSize;
    while (i < rSize && j < lSize)
    {
        if(rArr[i] <= lArr[j])
        {
            arr[k] =rArr[i];
            i++;
        }
        else
        {
            arr[k] = lArr[j];
            j++;
        }
        k++;
    }
    while ( i < rSize )
    {
        arr[k] = rArr[i];
        i++;
        k++;
    }
    while ( j < lSize )
    {
        arr[k] = lArr[j];
        j++;
        k++;
    }

     for (int m = 0; m < 9; m++)
    {
        printf("%d, ",arr[m]);
    }


}
