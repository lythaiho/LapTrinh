#include<stdio.h>
int main(){
	int a;
	printf("nhap so a bat ky tu ban phim \n",a);
	scanf("%d",&a);
	//so nguyen to la so lon hon 0 va khac 1
	if(a<0){
	printf("so am khong phai so nguyen to vui long nhap lai");}
	else{if(a==0){
		printf("loi xin vui long nhap lai");}
		else{if(a==1){
			printf(" so 1 khong phai so nguyen to cung khong phai la hop so");}
			else{ if(a==2){
		printf("so 2 la so nguyen to %d",a);}
			else{if(a>2){			
				for(int b=2;b<a;b=b+1){
					if(a%b==0){
					printf("  So a khong phai so nguyen to" );break;}
					else{
						printf("   So %d la so nguyen to",a);break;}
					}
				}
			}
			
		}
	}	
}
}

	

