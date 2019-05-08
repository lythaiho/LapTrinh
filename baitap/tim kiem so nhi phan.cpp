#include<stdio.h>

int main(){
	int arr[10],i,j;
	for(i=0;i<10;i++){
		printf("nhap %d :\n",i);
		scanf("%d",&arr[i]);
	}
	for(j=0;j<9;j++){
		for (int j=0; j<9-i-1; j++)
   		{
        	if (arr[j] > arr[j+1])
        	{
          		int temp = arr[j];
           		arr[j] = arr[j+1];
           		arr[j+1] = temp;
       		}	
  		}
   	}
	int low =arr[0];
	int high =arr[9];
	int a;
	printf(" nhap so can tim %d :",a);
	scanf("%d",&a);
	int flag =0;
		while(low<=high)
		{
		int mid = low + (high - low)/2;
			if(a == arr[mid])
			{
			flag = 1;
			printf("Tim thay so o chi muc: %d\n", mid);
			break;
			} else if(a<arr[mid]){
			high = mid -1;
			}else if (a > arr[mid]){
			low = mid +1;
			}
		}
		if(flag ==0){
		printf("Khong co so trong mang");
		}
	return 0;
}

