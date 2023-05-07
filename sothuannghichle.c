#include <stdio.h>
#include <stdbool.h>

int tn(long long int n) {
	long long int rev = 0;
	long long int origiral = n;
	while (n>0){
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return origiral == rev;
}
int ktrasole(long long int n) {
	while (n>0){
		int digit = n % 10; 
		if (digit % 2 == 0){
			return false;
		}
		n /= 10;
	}
	return true;
}
int tongcacchuso(long long int n) {
	int s = 0;
	while (n>0){
		s += n % 10;
		n /= 10;
	}
	return s % 2 == 1;
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--){
		long long int n;
		scanf("%lld", &n);
		if (tn(n) && ktrasole(n) && tongcacchuso(n)) {
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}