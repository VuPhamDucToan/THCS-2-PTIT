#include <stdio.h>
#include <math.h>
long long SNT(long long n) {
    if (n < 2) {
        return 0;
    }
    else {
        for (long long i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return 0;
            }

        }
        return 1;
    }
}
int main() {
    long long t; scanf("%lld", &t);
    while (t--) {
        long long n; scanf("%lld", &n);
        for (long long i = 2; i <= n / 2; i++) {
            if (SNT(i) == 1) {
                long long j = n - i;
                if (SNT(j) == 1)
                    printf("%lld %lld ", i, j);
            }
        }
        printf("\n");
    }
}
