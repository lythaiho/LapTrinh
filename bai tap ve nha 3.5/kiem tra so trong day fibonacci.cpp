#include<stdio.h>

int main(){
	int x,y,z;
	float  Fi;
	printf("nhap x \n",x);
	scanf ("%d",&x);
	if(x==0){
		printf("so trong day Fibonacci l� 0");}
	else if(x==1){
		printf(" so trong day Fibonacci l� 1");}
	else if(x==2){
		printf(" so trong day Fibonacci l� 1");}
	else if(x==3){
		printf(" so trong day Fibonacci l� 2");}
	else if(x>3){	y=1;
			z=2;
		for(int i=4;i<=x;i++){
			Fi=y+z;	
			y=z;
			z=Fi;
			}
		printf(" so %d trong day Fibonacci la %f \n",x,Fi);}
	return 0;
	}
		
		
