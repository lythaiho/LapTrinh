#include<stdio.h>

int main(){
	int m,n;
	do{
		printf("Nhap m= ");
		scanf("%d",&m);		
	}while(m<=0);
	do{
		printf("Nhap n= ");
		scanf("%d",&n);		
	}while(n<=0);
	int A[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("A[%d][%d]= ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	int B[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("B[%d][%d]= ",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	printf("Ma tran A \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%3d",A[i][j]);
		}
		printf("\n");
	}
		printf("Ma tran B \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%3d",B[i][j]);
		}
		printf("\n");
	}
	int C[m][n],D[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			C[i][j]=A[i][j]+B[i][j];
			D[i][j]=A[i][j]-B[i][j];
		}
	}
	printf("Ma tran Tong \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%3d",C[i][j]);
		}
		printf("\n");
	}
	printf("Ma tran Hieu \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%3d",D[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
	
