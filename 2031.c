#include<stdio.h> 
int main(){ 
	int n; 
	scanf("%d", &n); 
	for(int i = n; i >= 1; i--){ 
		int k = i-1; 
		for(int j = 1; j <= i; j++){ 
			if(i == 1) 
				printf("@"); 
			else 
				printf("%c", 64+k); 
			k++; 
		} 
		printf("\n"); 
	} 
 }