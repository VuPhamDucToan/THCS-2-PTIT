#include<stdio.h>
long long UCLN(long long x, long long y) {
	while (x!=y)
	{
		if (x > y) {
			x = x - y;
		}
		else {
			y = y - x;
		}
	}
	return x;
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--)
	{
		long long a, b, c, d;
		scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
		if (UCLN(a, b) == UCLN(c, d))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}