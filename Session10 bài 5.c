#include <stdio.h>
int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;   
    while (left <= right) {
        int mid = left + (right - left) / 2;  
        if (arr[mid] == x)
            return mid; 
        else if (arr[mid] < x)
            left = mid + 1; 
        else
            right = mid - 1;  
    }
    return -1;
}
int main() {
    int arr[8]={1,4,6,7,11,14,16,19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    int result = binarySearch(arr, n, x);
    if (result == -1)
        printf("Khong co phan tu %d trong mang \n", x);
    else{
        printf("Phan tu %d o vi tr %d trong mang \n", x, result);
	}   
    return 0;
}

