#include <stdio.h>
#include <math.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a == 0) {
		if (b == 0) {
			printf("\nVo so nghiem");
		}
		else {
			printf("\nVo nghiem");
		}
	}
	else {
		float x = (float)-b / (float)a;
		printf ("\n %.2f", x);
	}
	return 0;
}