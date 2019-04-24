#include<stdio.h>

int main(){
	int(a);
	printf( " nhap so thuc a bat ky tu ban phim\n",a);
	scanf("%d",&a);
	int(b);
	printf( " nhap so thuc b bat ky tu ban phim\n",b);
	scanf("%d",&b);
	int(c);
	printf( " nhap so thuc c bat ky tu ban phim\n",c);
	scanf("%d",&c);
	//de ba so a,b,c bat ki la ba canh cua mot goc vuong ta can
	if(a+b >c & a+c >b & b+c>a){
		if(a==b &b==c& a==c ){
			printf(" ba so a,b,c la ba canh cua mot tam giac deu");
		}else if(a==b || a==c || b==c){
			printf(" ba so a,b,c la ba canh cua mot tam giac can");
		} 
		else if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a){
		printf(" ba so a,b,c la  ba canh cua mot tam giac vuong" );}
		else {
		printf( " ba so a,b,c la  ba canh cua mot tam giac thuong");}}
	else
	printf( " ba so a,b,c khong phai ba canh cua mot tam giac");
		
}
