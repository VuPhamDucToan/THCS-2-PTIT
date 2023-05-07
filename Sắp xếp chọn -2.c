#include<stdio.h> 
int main(){
	int n; 
	scanf("%d", &n);
	int a[100]; 
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){ 
			int min = a[i]; 
			int m; 
			for(int d=j; d<n; d++){
				if(a[d] < min ){
					min = a[d]; 
					m = d;
				}
			}
			if(a[i] > min){ 
				int temp = a[i];
				a[i] = a[m];
				a[m] = temp;
			}
		}
		if(i<n-1){
			for(int k=0; k<n; k++){ 
				printf("%d ", a[k]);
			} 
			printf("\n");
		}
	}
}