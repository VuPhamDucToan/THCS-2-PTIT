#include <stdio.h>
#include <math.h>

int main() {
	int t;
	long long a;
	scanf("%d", &t);
	while (t--){
		scanf("%lld", &a);
		printf("%lld\n", a * a);
	}
}