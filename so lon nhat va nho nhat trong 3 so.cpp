#include<stdio.h>
int main (){
	int a;
	printf ("nhap so a bat ki tu ban phim :\n");
	scanf("%d", &a);
	int b;
	printf( " nhap so b bat ki tu ban phim:\n");
	scanf("%d", &b);
	int c;
	printf( " nhap so c bat ki tu ban phim:\n");
	scanf("%d", &c);
	if (a>=b){
		if(c>=a){
		printf("%d la so lon hon la so c ",c);
		printf("%d la so nho hon la so b ",b);}
		else{if(c>=b){
			printf("%d la so lon hon la so a ",a);
			printf("%d la so nho hon la so b ",b);}
			else{
				printf("%d la so lon hon la so a ",a);
				printf("%d la so nho hon la so c ",c);
				
			}
		}
	}else{if(c>=b){
		printf("%d la so lon hon la so c ",c);
		printf("%d la so nho hon la so a ",a);}
		else{if(c>=a){
			printf("%d la so lon hon la so b ",b);
			printf("%d la so nho hon la so a ",a);}
			else{
				printf("%d la so lon hon la so b ",b);
				printf("%d la so lon hon la so c ",c);}
			}
		}
	}
			
		
		
