#include<stdio.h>
#include<stdlib.h>


int MaxElement(int rAr[],int Right,int Left);
int Arr[]={4, 5, 8, 9, 10, 11, 7, 3, 2, 1};


int main(){
	int size=sizeof(Arr)/sizeof(Arr[0]);
	int Max=MaxElement(Arr,size-1,0);
	printf("Max Element: %d",Max);
}


int MaxElement(int rAr[],int Right,int Left){
	while(Right>Left){
		int Mid=(Left+Right)/2;
		if (rAr[Mid] > rAr[Mid+1]){
           Right = Mid;
		}
        else if (rAr[Mid] < rAr[Mid+1]){
           Left = Mid+1;
		}
	}
	return rAr[Left];}
