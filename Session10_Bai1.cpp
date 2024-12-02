#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int number, index=0, flag=0;
	printf("Moi ban nhap phan tu bat ky: ");
	scanf("%d",&number);
	for(int i=0;i<5;i++){
		if(arr[i]==number){
			index=i;
			flag=1;
		}
	}
	if(flag==1){
		printf("So thu %d nam o vi tri arr[%d] ", number, index);
	} else("Phan tu %d khong co trong mang",number);
	return 0;
}
