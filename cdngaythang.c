#include <stdio.h>
#include <math.h>

int main() {
	int a, y, w, d; 
	scanf("%d", &a); 
	y = a / 365; 
	w = (a % 365) / 7; 
	d = (a % 365) % 7; 
	printf("%d %d %d", y, w, d);
		return 0;
}