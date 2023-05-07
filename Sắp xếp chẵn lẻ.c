#include <stdio.h> 
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	for(int i = 0;i < n;i++){
		scanf("%d",&arr[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int i = 0;i < n;i++){
		if(arr[i] % 2 == 0){
			printf("%d ",arr[i]);
		}
	}
	for(int i = 0;i < n;i++){
		if(arr[i] % 2 != 0){
			printf("%d ",arr[i]);
		}
	}
	return 0;
}