#include<stdio.h> 
int main() { 
	int n, m; 
	scanf("%d", &n); 
	m = n-1; 
	for (int i=1;i<=n+m;i++) { 
		for(int j=1;j<= n+m;j++) { 
			if (j <= m) {
				printf("~");
			} else {
				if (j==m+1 || j==n+m || i==1|| i==n+m) { 
					printf("*"); 
				} else { 
					printf("."); 
				} 
			} 
		} 
		printf("\n");
		m--; 
	} 
	return 0; 
}