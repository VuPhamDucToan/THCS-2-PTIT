#include<stdio.h>
int main(){
	int n; 
	scanf("%d", &n);
	int a[100];
	int c = 64;
	for(int i=0; i<n; i++){ 
		a[i] = c; 
		c += 2;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<i+1; j++){
			printf("%c", a[j]);
		}
		for(int j=i; j>0; j--){
			printf("%c", a[j] - 2);
		}
		printf("\n");
	}
}