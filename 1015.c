#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c,x, y, Delta;
	scanf("%f %f %f", &a, &b, &c);
	if (a == 0) {
		if (b == 0) {
			printf("NO");
		}
		else {
			printf("%.2f", (float)-c / b);
		}
	}
	else {
			Delta = b * b - 4 * a * c;
		if (Delta>0) {
			x = (float)(-b + sqrt(Delta)) / (2 * a);
			y = (float)(-b - sqrt(Delta)) / (2 * a);
			printf("%.2f %.2f", x,y);
		} else if(Delta==0){
			printf("%.2f",(float)-b / (2* a) );
		}
		else {
			printf("NO");
		}
	}
	return 0;
}