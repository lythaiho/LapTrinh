#include<stdio.h>

int main(){
	int arr[10],gan,i;
	for(i=0;i<10;i++){
		printf("Nhap %d :\n",i);
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<10;j++){
		for(i=0;i<10;i++){
			if(arr[i]>arr[i+1]){
				gan=arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=gan;
			}
		}
	}
		for(i=0;i<10;i++){
		printf("in ra phan tu %d = %d :\n",i,arr[i]);
		}
		printf("so lon nhat la %d va gan lon nhat la %d",arr[9],arr[8]);
	}
		
