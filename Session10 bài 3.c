#include<stdio.h>
int main(){
	int arr[5]={6,3,5,2,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n-1;i++){
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	printf("Mang moi: \n");
	for(int i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
	printf("\n");
	return 0;
}
