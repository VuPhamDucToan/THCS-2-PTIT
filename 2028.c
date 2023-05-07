#include<stdio.h> 
int main(){ 
	int n; 
	scanf("%d", &n); 
	int k = 1; 
	for(int i = n; i >= 1; i--){ 
		int u = k; 
		for(int j = 1; j <= i; j++){ 
			printf("%c", 64+u); 
			u+=2; 
		} 
		k+=2; 
		printf("\n"); 
	} 
}