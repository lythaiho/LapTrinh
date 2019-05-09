#include<stdio.h>

int main(){
	int a;//so mang;
	printf("so mang can nhap :",a);
	scanf("%d",&a);
	int arr[a],i,j;
	for(i=0;i<a;i++){
		printf("nhap %d = ",i);
		scanf("%d",&arr[i]);
	}
	int tmp;
	for (j=1; j<a; j++) {
    	i =j - 1;
    	tmp = arr[j];
   		while ( (i>=0) && (tmp > arr[i]) ) {
        	arr[i+1] = arr[i];
        	i--;
    	}
    	arr[i+1] = tmp;
	}
	for(i=0;i<a;i++){
	printf("Mang duoc sap xep voi thu tu giam dan %d=%d \n",i,arr[i]);
	}
	return 0;		
}
