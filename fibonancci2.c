#include <stdio.h>
unsigned long long fibonancci(unsigned long long n) {
	if (n==0||n==1)
	{
		return 1;
	}
	unsigned long long fn2 = 0, fn1 = 1;
	for (unsigned long long i = 3; i <= 1000; i++) {
		unsigned long long fn = fn1 + fn2;
		if(fn==n){
			return 1;
		}
		fn2 = fn1;
		fn1 = fn;
	}
	return 0;
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--)
	{
		unsigned long long n;
		scanf("%lld", &n);
		if (fibonancci(n))
		{
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}