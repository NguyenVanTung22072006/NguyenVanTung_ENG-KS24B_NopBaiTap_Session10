#include <stdio.h>
int main() {
    int arr[8]={7,2,4,1,3,6,5,8};
    
    for(int i=0; i<8; i++){
    	for(int j=0; j<7-i; j++){
    		if (arr[j] > arr[j + 1]){ 
                int temp = arr[j]; 
				arr[j] = arr[j + 1]; 
				arr[j + 1] = temp; 
            }
		}
	}
    printf("Mang sau khi sap xep:\n");
    for(int i=0; i<8; i++){
    	printf("%d ", arr[i]);
	} 
    int x;
    printf("\nNhap so can tim: ");
    scanf("%d", &x);
    
    int found=-1;
    for(int i=0; i<8; i++){
        if (arr[i] == x) {
            found = i;
            break;
        }
    }
    if(found!=-1) 
        printf("Phan tu %d tim thay tai vi tri %d\n", x, found);
    else 
        printf("Khong tim thay phan tu %d\n", x);

    return 0;
}
