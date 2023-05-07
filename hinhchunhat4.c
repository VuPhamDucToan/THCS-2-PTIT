#include <stdio.h> 
int main () { 
	int a,b; 
	scanf("%d %d",&a,&b); 
	if (a>b) { 
		int n=a; 
		while (n>b-a && n>0) { 
			printf("\n"); 
			for (int i=n; i>(n-b); i--) { 
				if (i>0) { 
					printf("%d",i); 
				} 
			} 
			for (int j=0; j<(b-n); j++) { 
				printf("%d",j+2); 
			}
			n--; 
		} 
	} 
	else { 
		int n=b; 
		while (n>b-a && n>0) { 
			printf("\n"); 
			for (int i=n; i>(n-b); i--) { 
				if (i>0) { 
					printf("%d",i); 
				} 
			} 
			for (int j=0; j<(b-n); j++) { 
				printf("%d",j+2); 
			} 
			n--; 
		} 
	} 
}