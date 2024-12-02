#include <stdio.h>

int main(){
    int row, col;

    printf("Nhap so dong: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);

    int arr[row][col];
    printf("Nhap gia tri cac phan tu cho ma tran %dx%d:\n", row, col);
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int diagonal[n];
    for(int i=0; i<n; i++){
        diagonal[i] = arr[i][col-i-1];
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(diagonal[j] < diagonal[j+1]){
                int temp = diagonal[j];
                diagonal[j] = diagonal[j+1];
                diagonal[j+1] = temp;
            }
        }
    }
    int k = 0;
    for(int i=0; i<n; i++){
        arr[i][col-i-1] = diagonal[k++];
    }
    printf("Ma tran sau khi sap xep duong cheo phu theo thu tu giam dan:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
