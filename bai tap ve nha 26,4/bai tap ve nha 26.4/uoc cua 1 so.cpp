#include<stdio.h>
int main(){
	int a;
	printf("nhap so a bat ky tu ban phim \n",a);
	scanf("%d",&a);
	if(a<0){
		printf(" so am khong co uoc");
		}
	else if(a==0){
		printf(" so 0 la boi cua moi so nguyen khac 0");
		}
	else if(a==1){
		printf("uoc cua 1 la chinh no va la 1");
		}
	else{ // a>1
	printf(" uoc cua so a la:  ");
		for(int b=1;b<=a;b=b+1){
			if(a % b == 0){
            printf("%d,  ",b);
				}
			}
		}
}


	
	
      



		



	

