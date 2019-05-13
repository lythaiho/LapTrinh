#include<stdio.h>

int main(){
	int arr[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("arr[%d][%d] =",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%3d",arr[i][j]);
		}
		printf("\n");	
	}
	int S1=0,S2=0,S3=0,S4=0;
		for(int j=0;j<4;j++){
			S1= S1+arr[0][j];
			S2= S2+arr[1][j];
			S3= S3+arr[2][j];
			S4= S4+arr[3][j];
		}
			printf("Tong S mang 1 =%d\n",S1);
			printf("Tong S mang 2 =%d\n",S2);
			printf("Tong S mang 3 =%d\n",S3);
			printf("Tong S mang 4 =%d\n",S4);	
	int arr1[4]={S1,S2,S3,S4};
	int tmp,i,j;
		for (j=1; j<4; j++) {
    		i =j - 1;
    		tmp = arr1[j];
   			while ( (i>=0) && (tmp > arr1[i]) ) {
        	arr1[i+1] = arr1[i];
        	i--;
    		}	
    		arr1[i+1] = tmp;
		}
	for(i=0;i<4;i++){
	printf("Mang duoc sap xep voi thu tu giam dan %d=%d \n",i,arr1[i]);
	}
	if(S1==arr1[4]){
		printf("Mang 1 co tong lon nhat = %d",arr1[4]);
		}
	if(S2==arr1[4]){
		printf("Mang 2 co tong lon nhat = %d",arr1[4]);
	}
	if(S3==arr1[4]){
		printf("Mang 3 co tong lon nhat = %d",arr1[4]);
	}
	if(S4==arr1[4]){
		printf("Mang 4 co tong lon nhat = %d",arr1[4]);
	}
	return 0;
}
		
	
	
			
