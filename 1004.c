#include <stdio.h>
#include <math.h>

int main() {
	int t, N;
	scanf("%d", &t);
	while (t--) {
		double y;
		scanf("%d", &N);
		printf("%.15f\n", y=(double) 1/N);
	}
}