#include<stdio.h>

int main(){
int data[] = {0,11,13,14,15,17,18};
int low =0;
int high = 6;
int timkiemso = 13;
int flag =0;
while(low<=high)
{
	int mid = low + (high - low)/2;
	if(timkiemso == data[mid])
	{
		flag = 1;
		printf("Tim thay so o chi muc: %d\n", mid);
		break;
	} else if(timkiemso<data[mid]){
		high = mid -1;
	}else if (timkiemso > data[mid]){
		low = mid +1;
	}
}
if(flag ==0){
	printf("Khong co so trong mang");
}
}
