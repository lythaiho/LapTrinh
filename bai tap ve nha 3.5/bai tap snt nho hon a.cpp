#include<stdio.h>

int main(){
	int a;
	printf("nhap a \n",a);
	scanf("%d",&a);
	if(a<2){
		printf(" khong co so nguyen to");}
	else if(a==2){
		printf(" co 1 so nguyen to la 2");}
	else{printf ("so nguyen to la: ");}
		for(int i=2;i<=a;i++)
			{int x=0;
			for(int j=1;j<=i;j++)
				{
				if(i%j==0){
				x++;
				}
			
			}
			if(x==2){
				printf ("%d   ",i);}
			else{ continue;}
		}
	
	return 0;
}		
	
