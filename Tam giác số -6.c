#include <stdio.h> 
main () {
	int n;
	scanf("%d",&n);
	for (int i = 1 ; i <= n; i++) {
		for(int j=1; j<=n-i; j++) 
			printf("~");
		for (int j=1; j<=i ; j++) {
			printf("%d",2*j); 
		}
		for ( int j = i-1 ; j > 0; j--) {
			printf("%d",2*j);
		}
		printf("\n"); 
	}
}