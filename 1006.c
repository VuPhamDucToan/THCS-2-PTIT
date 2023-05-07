#include <stdio.h>
#include <math.h>

int main() {
 int a, b;
 scanf ("%d %d", &a,&b);
 if (b == 0) {
	 printf("0");
 }
 else {
	 printf("%d \n", a + b);
	 printf("%d \n", a - b);
	 printf("%d \n", a * b);
	 float c = a;
	 float d = b;
	 printf("%.2f \n", c / d);
	 printf("%d \n", a % b);
 }
	return 0;
}