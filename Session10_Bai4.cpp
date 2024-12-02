#include <stdio.h>

int main(){
	int arr[5]={7,2,5,3,6};
	
	for( int i=1; i<5; i++){
	    int key=arr[i];
     	int j=i-1;
     	
     	while (j>=0 && arr[j]>key){
     	    arr[j+1]=arr[j];
     		j=j-1;
		}
		arr[j+1]=key;
	}
	
	printf("xap xep:");
	for(int i=0; i<5; i++){
		printf(" %d" ,arr[i]);
	}
	return 0;
}
