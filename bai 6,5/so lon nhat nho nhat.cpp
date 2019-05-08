#include<stdio.h>
int main(){
	int mang[10],i,max,min;
	for(i=0;i<10;i++){
		printf("nhap phan tu co chi so %d: ",i);
		scanf("%d",& mang[i]);
	}
		max=mang[0];
		min=mang[0];
		for(i=0;i<10;i++){		
				if(mang[i]>max){
				max=mang[i];	
				}
				if(mang[i]<min){
				min=mang[i];
				}
		}	
		printf("So lon nhat la %d \n",max)	;
		printf("So nho nhat la %d \n",min)	;
	return 0;
}
