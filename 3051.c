#include <stdio.h>
#include <math.h> 
long long nguyento(long long n) {
    if (n < 2) {
        return 0;
    }
    else {
        for (long long i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return 0;
            }
        }
        return n > 1;
    }
}
int main() {
    long long t; scanf("%lld", &t);
    while (t--) {
        long long a, b; scanf("%lld %lld", &a, &b);
        long long count = 0;
        for (long long i = sqrt(a); i <= sqrt(b); i++) {
            if (nguyento(i)) {
                count++;
            }
        }
        printf("%lld\n", count);
    }
}
