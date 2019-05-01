#include<stdio.h>
int main(){
	int a;
	printf("nhap so a bat ky tu ban phim \n",a);
	scanf("%d",&a);
	//so nguyen to la so lon hon 0 va khac 1
	if(a<0){
	printf("so am khong phai so nguyen to vui long nhap lai");
	printf(" so am khong co uoc");}
	else{if(a==0){
		printf("loi xin vui long nhap lai");
		printf("so 0 co vo so uoc khac 0");}
	else{if(a==1){
			printf(" so 1 khong phai so nguyen to cung khong phai la hop so");
			printf(" so 1 so 1 uoc duy nhat la chinh no va bang 1");}
	else{ if(a==2){
		printf("so 2 la so nguyen to %d",a);
		printf("so 2 co uoc la 1 va 2");}
	else{if(a>2){			
				for(int b=2;b<=a;b=b+1){
					if(a%b==0){
					printf("  So %d khong phai so nguyen to",a );
					printf( "   So %d co cac uoc la %d ",a,b);}
					else{
						printf("   So %d la so nguyen to",a);
						printf(" so %d co 2 uoc la 1 va chinh no",a);break;}
					}
				}
			}
			
		}
	}	
}
}

	

