#include<stdio.h> 
int main() { 
	int t; 
	scanf("%d", &t); 
	while(t--) { 
		int a,b,c,d; 
		scanf("%d%d%d%d", &a, &b, &c, &d); 
		if(c-a==d-b) { 
			printf("YES"); 
		} else{ 
			printf("NO"); 
		} 
		printf("\n"); 
	} 
}