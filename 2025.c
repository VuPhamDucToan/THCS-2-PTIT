#include<stdio.h> 
int main(){ 
	int n,m; 
	scanf("%d %d", &n, &m); 
	int k = 1; 
	for(int i = 1; i <= m; i++){ 
		if(i == 1) 
			printf("@"); 
		else 
			printf("%c", 64+k++); } 
	printf("\n"); 
	for(int i = 1; i <= n-1; i++){ 
		int init = i; 
		for(int j = 1; j <= m; j++){ 
			if(init >= m-1) 
				printf("%c", 64+(m-1)); 
			else 
				printf("%c", 64+init); 
			init++; 
		} 
		printf("\n"); 
	} 
}