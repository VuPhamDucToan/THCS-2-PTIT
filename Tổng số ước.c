#include <stdio.h>
#include <math.h> 
int prime[2000001];
void pt() {
	for (int i = 1; i <= 2000000; i++) {
		prime[i] = i; 
	}
	for (int i = 2;i <= sqrt(2000000); i++) { 
		if (prime[i] == i) {
			for (int j = i * i; j <= 2000000; j += i) { 
				if (prime[j] == j) {
					prime[j] = i; 
				}
			}
		}
	}
}
int sum(int n) {
	int tong = 0; 
	while (n != 1) {
		tong += prime[n];
		n /= prime[n]; 
	}
	return tong;
}
int main() {
	pt();
	int t;
	scanf("%d", &t);
	long long tong = 0;
	while (t--) { 
		int n;
		scanf("%d", &n);
		tong += sum(n);
	} 
	printf("%lld", tong);
	return 0; 
} 