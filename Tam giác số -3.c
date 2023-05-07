#include <stdio.h> 
main () { 
	int n; 
	scanf("%d",&n);
	for (int i = 1 ; i <= n; i++) {
		for (int j=1; j<=i ; j++) {
			printf("%d",2*j-1);
		}
		for ( int j= i-1 ; j >0; j--) {
			printf("%d",2*j-1); 
		}
		printf("\n");
	}
}