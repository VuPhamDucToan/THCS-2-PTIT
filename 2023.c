#include<stdio.h> 
#include<math.h> 
int main() { 
	int r,c,max1,max2; 
	scanf("%d %d",&r,&c); 
	if(r>c) 
		max1=r; 
	else 
		max1=c; 
	for(int i=1; i<=r; i++) { 
		char max2=max1 + 96; 
		for( int j=1; j<=c; j++) { 
			if(i>j) 
				printf("%c", max2--); 
			else 
				printf("%c",max2); 
		} 
		printf("\n"); 
	} 
}