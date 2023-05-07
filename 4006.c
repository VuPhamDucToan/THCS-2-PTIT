#include <stdio.h> 
void Nhap(int arr[], int n){ 
	for(int i = 0; i <= n - 1; i++){
		scanf("%d",&arr[i]);
	} 
} 
void Xuat(int arr[], int n){
	for(int i = 0; i <= n - 1; i++){
		printf("%d ",arr[i]);
	}
} 
void DaoNguoc(int arr[], int start, int end){
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	} 
}
int main(){ 
	int n;
	scanf("%d",&n);
	int start = 0;
	int end = n - 1;
	int arr[100];
	Nhap(arr,n);
	DaoNguoc(arr,start,end);
	Xuat(arr,n); 
}