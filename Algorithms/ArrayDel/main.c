#include <stdlib.h>
#include <stdio.h>
#define N 6



int main()
{
    int arr[N];
    int pos;
    printf("Please Enter 6 elements :\n");

    for(int i =0; i < N; i++)
       scanf("%d",&arr[i]);
    printf("Enter deletion Position : ");
    scanf("%d",&pos);
    DelEelements(arr,pos);





    return 0;}

    void DelEelements(int arr[], int pos)
{
    int userpos;
    int Arrpos = pos - 1;
    if(pos > N){
        printf("Position Doesnt Exist \n");
        printf("Enter deletion Position : ");
        scanf("%d",&userpos);
        DelEelements(arr,userpos);}
    else
    {
        for(int i =Arrpos; i < N-1; i++)
        {
            arr[i] = arr[i+1];
        }
        printf("Array Elements After Deleting : ");
        for(int i =0;i<N-1; i++)
            printf("%d ",arr[i]);
    }
}
