#include<stdio.h> 
int main() {
	int n;
	scanf("%d", &n);
	int m = n - 1;
	for (int i = 1; i <= n+m; i++) {
		for (int j = 1; j <= i+m; j++) {
			if (j <= m) {
				printf("~");
			} else {
				printf("*");
			}
		}
		printf("\n");
		m--;
	}
	return 0;
}