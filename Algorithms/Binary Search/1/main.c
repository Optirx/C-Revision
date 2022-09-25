#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
    int Num;
    int arr[7] = {13,25,7,23,58,4,60};
    printf("Please , Enter a Number : ");
    scanf("%d",&Num);
    int result = BinarySearch(arr,7,Num);
    if(result == 1)
       printf("The Number Does Exist");
    else
       printf("The Number Doesnt exist");

    return 0;
}


int BinarySearch(int arr[],int n,int Num)
{
    int Low =0;
    int High = n-1;
    int Mid;
    while (Low<=High)
    {
        Mid = (Low+High)/2;
        if(Num == arr[Mid])
            return 1;
        else if(Num > arr[Mid])
            Low = Mid+1;
        else
            High =Mid -1;
    }
    return -1;


}
