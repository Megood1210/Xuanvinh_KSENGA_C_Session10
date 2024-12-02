#include<stdio.h>
int main(){
	int arr[5]={7,4,6,5,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n-1;i++){
		int minIndex=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[minIndex]){
				minIndex=j;
			}
		}
		int temp=arr[minIndex];
		arr[minIndex]=arr[i];
		arr[i]=temp;
	}
	printf("Mang moi: \n");
	for(int i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
	printf("\n");
	return 0;
}
