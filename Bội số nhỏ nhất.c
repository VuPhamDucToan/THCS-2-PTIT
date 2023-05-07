#include <stdio.h> 
long long UCLN(long long a, long long b) {
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    else {
        return UCLN(b, a % b);
    }
}
long long BCNN(long long a, long long b) {
    return (a * b / UCLN(a, b));
}
int main() {
    int t; scanf("%d", &t);
    while (t--) {
        long long a, b; scanf("%lld %lld", &a, &b);
        long long bcnn = 1;
        for (long long i = a; i <= b; i++)
        {
            bcnn = BCNN(bcnn, i);
        }
        printf("%lld\n", bcnn);
    }
}
