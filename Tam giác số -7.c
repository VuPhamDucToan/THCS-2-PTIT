#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		int k = n - 1;
		int h = i; 
		for (int j = 1; j <= i; ++j) {
			if (j > 1) {
				printf("%d ", h += k); 
				k--;
			}
			else if (j == 1) {
				printf("%d ", i); 
			}
		}
		printf("\n");
	}
	return 0;
}