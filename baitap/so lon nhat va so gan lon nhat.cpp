#include<stdio.h>

int main(){
	int arr[10],i;
	for(int i=0;i<10;++i){
		printf("nhap so %d :",i);
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	int vi_tri_max =0;
	for(int i=0;i<10;++i){
		if(arr[i]>max){
			max=arr[i];
			vi_tri_max =i;
		}
	}
		printf( " so lon nhat : %d,vi tri max : %d \n",max,vi_tri_max);
	int Gmax= arr[0];
	int vi_tri_Gmax =0;
	arr[vi_tri_max]=0;
		for(int i=0;i<9;i++){
			if(Gmax<=arr[i]){
			Gmax= arr[i];
			vi_tri_Gmax=i;}		
		}	
		printf( " so gan lon nhat : %d  vi tri Gmax : %d\n",Gmax,vi_tri_Gmax);
	return 0;
}	
	
