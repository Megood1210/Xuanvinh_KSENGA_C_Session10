#include <stdio.h>
void linearSearch(int arr[], int n, int x) {
    int positions[n]; 
    int count = 0;     
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            positions[count] = i;  
            count++;              
        }
    }
    if (count == 0) {
        printf("Khong co phan tu %d trong mang \n", x);
    }else{
        printf("Phan tu %d o cac vi tri: ", x);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    }
}
int main() {
    int arr[8]={1,4,6,7,11,14,16,19};
    int n = sizeof(arr) / sizeof(arr[0]);   
    int x;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    linearSearch(arr, n, x);
    return 0;
}

