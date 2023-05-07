#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
	int n, t, a[100], b[1000] = {0};
	scanf("%d", &t); 
	for (int j = 1; j <= t; ++j) {
		scanf("%d", &n); 
		int count = 1;
		for (int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
			if (i > 0) {
				int isCheck = 1;
				for (int k = 0; k < i; ++k) {
					if (a[i] < a[k]) { 
						isCheck = 0;
						break;
					}
				}
				if (isCheck == 1) { 
					count++; 
				}
			}
		}
		printf("%d\n", count);
	}
}