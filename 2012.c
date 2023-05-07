#include<stdio.h> 
int main() { 
	int r,c; 
	scanf("%d %d",&r,&c); 
	int i,j; 
	for (i=1; i<=r; i++) { 
		if(i<c) { 
			for(j=i; j>=2; j--) { 
				printf("%d",j); 
			} 
			for(j=1; j<=(c+1-i); j++) { 
				printf("%d",j); 
			} 
		} 
		else { 
			for(j=i; j>(i-c); j--) { 
				printf("%d",j); 
			} 
		} 
		printf("\n"); 
	} 
}