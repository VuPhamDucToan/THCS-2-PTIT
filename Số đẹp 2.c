#include <stdio.h> 
#include <stdbool.h>
#include <math.h>
long long thuannghich(long long n) {
    long long temp = n;
    long long socuoi = 0;
    while (temp != 0) {
        long long chusocuoi = temp % 10;
        socuoi = socuoi * 10 + chusocuoi;
        temp /= 10;
    }
    if (socuoi == n) {
        return 1;
    }
    else {
        return 0;
    }
}
long long tongchusochia10(long long n) {
    long long tongchuso = 0;
    while (n != 0) {
        tongchuso += (n % 10);
        n /= 10;
    }
    if (tongchuso % 10 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
long long main() {
    long long t; scanf("%lld", &t);
    while (t--) {
        long long n; scanf("%lld", &n);
        long long count = 0;
        long long a = pow(10, n - 1);
        long long b = pow(10, n);
        for (long long i = a; i < b; i++) {
            if (thuannghich(i) && tongchusochia10(i)) {
                count++;
            }
        }
        printf("%lld\n", count);
    }
}
