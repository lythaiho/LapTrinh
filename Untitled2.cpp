#include<stdio.h>

int isPrime(int a){
	if(a<=1){
		return 0;
	}
	else{
		int dem=0;
		for(int i=1;i<a;i++){
			if(a%i==0){			
				dem++;
			}
		}
		if(dem=1){
			return 1;
		}else{
			return 0;
		}
	}	
}
int main(){
	int n,m;
	printf("n = ");
	scanf("%d",&n);
	printf("m = ");
	scanf("%d",&m);
	for(int j=n;j<m;j++){
		if(isPrime(j)==1){
			printf("%d \n",j);
		}
	}
}
