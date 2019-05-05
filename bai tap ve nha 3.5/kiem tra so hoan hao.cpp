#include<stdio.h>
int main(){
	int n,s=0; //so a la so can kiem tra
	printf("nhap n \n",n);
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(n%i==0){
			s=s+i;}
		continue;}
	if(s==n){
		printf(" so %d la so hoan hao",n);}
	else{ 
		printf(" so %d khong phai so hoan hao",n);
	}
	return 0;
	}
		
