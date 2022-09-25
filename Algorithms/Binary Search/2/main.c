#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
    int Num;
    int arr[7] = {13,25,7,23,58,4,30};
    printf("Please , Enter a Number : ");
    scanf("%d",&Num);
    int result = BinarySearch(arr,0,6,Num);
    if(result == -1)
       printf("The Number Does Exist");
    else
       printf("The Number Doesnt Exist");

    return 0;
}



int BinarySearch(int arr[],int Low,int High,int Num)
{
    if(Low > High)
        return -1;
    else
    {
        int Mid = (Low+High)/2;
        if(Num == arr[Mid])
            return Mid;
        else if(Num > arr[Mid])
            return BinarySearch(arr,Mid +1,High,Num);
        else
            return BinarySearch(arr,Low,Mid-1,Num);
    }

}
