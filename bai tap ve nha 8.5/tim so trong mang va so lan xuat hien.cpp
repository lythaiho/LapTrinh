#include<stdio.h>

int main(){
	int data[10],i,j;
	for(i=0;i<10;i++){
		printf("Nhap %d =",i);
		scanf("%d",&data[i]);
	}
	for(i=0;i<9;i++){
		for (int j=0; j<10-i-1; j++)
   		{
        	if (data[j] > data[j+1])
        	{
          		int temp = data[j];
           		data[j] = data[j+1];
           		data[j+1] = temp;
       		}	
  		}
   	}
   		for(i=0;i<10;i++){
   		printf("Thu tu duoc sap xep lai la %d=%d \n",i,data[i]);
		}
	int a,b=0;
		printf("Nhap so can tim:",a);
		scanf("%d",&a);
	for(i = 0; i<10; i++){
    	if(a == data[i]){
      		printf("So can tim %d xuat hien trong mang :%d \n",a,i);
      		b=b+1;
    	}
	}
    	if(b>0){
    		printf("So lan xuat hien trong mang: %d \n",b);	  	
    	}else{
         printf("Khong co so can tim");
    	}			
	return 0;
}

