#include <stdio.h> 
long long nhonhat(long long n) {
    long long socuoi = 0;
    long long x = 1;
    while (n != 0)
    {
        long long chusocuoi = n % 10;
        if (chusocuoi == 6)
        {
            chusocuoi = 5;
        }
        socuoi = socuoi + chusocuoi * x;;
        x *= 10;
        n /= 10;
    }
    return socuoi;
}
long long lonnhat(long long n) {
    long long socuoi = 0;
    long long x = 1;
    while (n != 0)
    {
        long long chusocuoi = n % 10;
        if (chusocuoi == 5)
        {
            chusocuoi = 6;
        }
        socuoi = socuoi + chusocuoi * x;;
        x *= 10;
        n /= 10;
    }
    return socuoi;
}
int main() {
    int t; scanf("%d", &t);
    while (t--) {
        long long a, b; scanf("%lld %lld", &a, &b);
        printf("%lld ", nhonhat(a) + nhonhat(b));
        printf("%lld ", lonnhat(a) + lonnhat(b));
        printf("\n");
    }
}