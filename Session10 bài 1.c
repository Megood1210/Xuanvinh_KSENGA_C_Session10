#include <stdio.h>
int main() {
    int arr[] = {1,2,3,4,5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int searchNumber, found = -1;
    printf("Nhap phan tu con trong mang: ");
    scanf("%d", &searchNumber);
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchNumber) {
            found = i; 
            break;
        }
    }
    if (found != -1) {
        printf("Phan tu %d co trong mang o vi tri %d\n", searchNumber, found + 1);
    } else {
        printf("Ph?n t? %d khong co trong mang\n", searchNumber);
    }
    return 0;
}
