#include <stdio.h> 
#include <math.h>
long long songuyento(long long n) {
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
long long chuso(long long n) {
    long long temp = 0;
    while (n != 0) {
        long long chuso = n % 10;
        if (songuyento(chuso)) {
            temp++;
        }
        else {
            return 0;
        }
        n /= 10;
    }
    if (temp != 0) {
        return 1;
    }
}
long long tongchuso(long long n) {
    long long tong = 0;
    while (n != 0) {
        long long chuso = n % 10;
        tong += chuso;
        n /= 10;
    }
    if (songuyento(tong)) {
        return 1;
    }
    else {
        return 0;
    }
}
int main(int argc, char const* argv[]) {
    int t; scanf("%d", &t);
    while (t--) {
        long long a, b; scanf("%lld %lld", &a, &b);
        long long dem = 0;
        for (long long i = a; i <= b; i++) {
            if (chuso(i) && tongchuso(i) && songuyento(i)) {
                dem++;
            }
        }
        printf("%lld\n", dem);
    }
    return 0;
}

