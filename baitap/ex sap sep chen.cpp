#include<stdio.h>

int main(){
int data[5] = { 23, 90, 9, 25, 16 };
int tmp,i,j;
//perform insertion sorting
// neu gia tri thu 2 nho hon gia tri thu nhat thi dao vi tri
//gia tri tiep theo se so sanh voi cac gia tri truoc do va dao vi tri
for (j=1; j<5; j++) {
    i =j - 1;
    tmp = data[j];
    while ( (i>=0) && (tmp < data[i]) ) {
        data[i+1] = data[i];
        i--;
    }
    data[i+1] = tmp;
}
	for(i=0;i<5;i++){
   	printf("day so da duoc sap xep %d= %d \n",i,data[i]);
   }
   	return 0;
}
