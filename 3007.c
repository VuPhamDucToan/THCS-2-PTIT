#include<stdio.h>
#include<math.h>

int ktrasont(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int tn(int n) {
	int rev = 0;
	int m = n;
	while (n > 0) {
		int j = n % 10;
		rev = rev * 10 + j;
		n /= 10;
	}
	return m == rev;
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b;
		scanf("%d %d ", &a, &b);
		int dem = 0;
		for (int i = a; i <= b; i++) {
			if (ktrasont(i) && tn(i)) {
				printf("%d ", i);
				dem++;
				if (dem % 10 == 0)
					printf("\n");
			}
		}
		if (dem % 10 != 0)
			printf("\n");
		if (t > 0)
			printf("\n");
	}
	return 0;
}
