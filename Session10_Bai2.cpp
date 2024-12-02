#include <stdio.h>

int main (){
	int arr[5]={4,1,5,7,8};
	
	for( int i=0; i<5-1; i++){
		for( int j=0; j<5-i-1; i++){
			if ( arr[j]>arr[j+1]){
				int temp;
				temp =  arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("xap xep :");
	for ( int i=0; i<5; i++){
		printf(" %d", arr[i]);
	}
	return 0;
	
}
