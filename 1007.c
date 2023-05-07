#include <stdio.h>
#include <math.h>

int main() {
	long int a, b;
	scanf("%ld %ld", &a, &b);
	if (a > 0 && a < 1000000 && b >0 && b < 1000000) {
		printf("%ld \n", a + b);
		printf("%ld \n", a - b);
		printf("%ld \n", a * b);
		printf("%ld \n", a / b);
		printf("%ld \n", a % b);
		printf("%.2f ", (float)a / (float)b);
		return 0;
	}
}