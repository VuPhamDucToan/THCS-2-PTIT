#include <stdio.h>
#include <string.h>
#include <math.h>
int solve(int n) {
	if (n == 0 || n == 1) 
		return 1;
	long long fn2 = 0, fn1 = 1;
	for (int i = 3; i <= 93; i++) {
			long long fn = fn1 + fn2;
			if (fn == n)
			{
				return 1;
			}
				fn2 = fn1;
				fn1 = fn;
			
		}
	return 0;

}
int main() {
	int n;
	scanf("%d", &n);
	solve(n);
	if (solve(n))
		printf("1\n");
	else
		printf("0\n");
}