#include<stdio.h> 
int main() {
	int n;
	int f0 = 0, f1 = 1, f, i = 0;
	scanf("%d", &n);
	while (i < n) {
		printf("%d ", f0);
		f = f0 + f1;
		f0 = f1;
		f1 = f;
		i++;
	}
}