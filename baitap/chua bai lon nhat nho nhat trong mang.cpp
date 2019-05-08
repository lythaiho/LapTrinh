#include<stdio.h>

int main(){
	int arr[10];
	for(int i=0;i<10;++i){
		printf("nhap so %d :",i);
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	int min = arr[0];
	int vi_tri_max =0;
	int vi_tri_min =0;
	for(int i=0;i<10;++i){
		if(arr[i]>max){
			max=arr[i];
			vi_tri_max =i;
		}
		if(arr[i] <min){
			min= arr[i];
			vi_tri_min =i;
		}
	}
		printf( " so lon nhat : %d,vi tri max : %d \n",max,vi_tri_max);	
		printf( " so nho nhat : %d  vi tri min : %d\n",min,vi_tri_min);
	return 0;
}	
