#include<stdio.h>

int main(){
	int a[3]={5,6,7};
	int b[3]={10,6,3};
    int alice=0,Bod=0;
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            alice= alice+1;
        }
        if(a[i]<b[i]){
            Bod=Bod+1;
        }
    }
        printf("%d %d \n",alice,Bod);
    return 0;
}
