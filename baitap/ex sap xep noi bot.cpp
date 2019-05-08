#include<stdio.h>

int main(){
	int i,j,temp,arr[5]={23,90,9,25,16};
	for (int i=0; i<4; i++){
  		for (int j=0; j<5-i-1; j++)
   		{
        	if (arr[j] > arr[j+1])
        	{
          		int temp = arr[j];
           		arr[j] = arr[j+1];
           		arr[j+1] = temp;
       		}	
  		}
   	}
   	for(i=0;i<5;i++){
   	printf("day so da duoc sap xep %d= %d \n",i,arr[i]);
   }
   	return 0;
}
