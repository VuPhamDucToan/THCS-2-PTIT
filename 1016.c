#include <stdio.h>
#include <math.h>

int main() {
	int N, i, y;
	scanf("%d", &N); 
	if (N > 0 && N < 10) { 
		for (i = 1; i < 11; i++) {
			y = N * i;
			printf("%d ", y); 
		}
	}
	return 0;
}