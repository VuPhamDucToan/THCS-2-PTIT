#include<stdio.h> 
int main(){ 
	int r,c; 
	scanf("%d%d",&r,&c); 
	int i,j; 
	for(i=1; i<=r; i++) { 
		if (i<c) { 
			for (j=i; j<=c; j++) { 
				printf("%d",j); 
			} 
			for (j=(c-1); j>(c-i); j--) { 
				printf("%d",j); 
			} 
		} 
		else { 
			for (j=i; j>=(i-c+1); j--) { 
				printf("%d",j); 
			} 
		} 
		printf("\n"); 
	} 
}