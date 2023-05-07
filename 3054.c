#include <stdio.h> 
void catdoi(long long n) {
    long long socuoi = 0;
    long long x = 1;
    while (n != 0) {
        long long chusocuoi = n % 10;
        if (chusocuoi == 0 || chusocuoi == 8 || chusocuoi == 9) {
            chusocuoi = 0;
            socuoi = socuoi + chusocuoi * x;
        }
        else if (chusocuoi == 1) {
            chusocuoi = 1;
            socuoi = socuoi + chusocuoi * x;
        }
        else if (chusocuoi == 2 || chusocuoi == 3 || chusocuoi == 4 || chusocuoi == 5 || chusocuoi == 6 || chusocuoi == 7) {
            socuoi = 0;
        }
        else {
            socuoi = 0;
        }
        x *= 10;
        n /= 10;
    }
    if (socuoi != 0) {
        printf("%lld\n", socuoi);
    }
    else {
        printf("INVALID\n");
    }


}
int main() {
    int t; scanf("%d", &t);
    while (t--) {
        long long n; scanf("%lld", &n);
        catdoi(n);
        printf("\n");
    }
}
