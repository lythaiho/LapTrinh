#include<stdio.h>

int main(){
	int arr[10],i,soTb;
	for(i=0;i<10;i++){
		printf("nhap %d =",i);
		scanf("%d",&arr[i]);
	}
	int tmp,j;
	for (j=1; j<10; j++) {
    		i =j - 1;
    		tmp = arr[j];
    	while ( (i>=0) && (tmp < arr[i]) ) {
        	arr[i+1] = arr[i];
        	i--;
    	}
    	arr[i+1] = tmp;
	}
	for(i=0;i<10;i++){
		printf("mang sau khi duoc sap xep%d = %d\n",i,arr[i]);
	}
		
		soTb = arr[0] + (arr[9] - arr[0])/2;
		
		printf("So trung binh la : %d ",soTb);
	return 0;
}
		
		
