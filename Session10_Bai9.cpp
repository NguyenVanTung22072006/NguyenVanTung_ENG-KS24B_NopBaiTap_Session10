#include <stdio.h>

int main(){
    int row, col;
    
    printf("Nhap so dong: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);

    int arr[row][col];
    printf("Nhap cac phan tu cua mang:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("Nhap phan tu arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int diagonal[n];
    for(int i=0; i<n; i++){
        diagonal[i] = arr[i][i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(diagonal[i] > diagonal[j]){
                int temp = diagonal[i];
                diagonal[i] = diagonal[j];
                diagonal[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        arr[i][i] = diagonal[i];
    }
    printf("Mang sau khi sap xep tren duong cheo chinh:\n");
    for(int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
