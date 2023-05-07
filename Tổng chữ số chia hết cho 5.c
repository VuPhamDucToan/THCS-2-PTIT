#include <stdio.h>
#include <math.h>
int SNT(int n) {
    if (n < 2) {
        return 0;
    }
    else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return 0;
            }
        }
        return n > 1;
    }
}
int tongcacchusochiahetcho5(int n) {
    int tong = 0;
    while (n != 0) {
        tong += (n % 10);
        n = n / 10;
    }
    if (tong % 5 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    int n; scanf("%d", &n);
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (tongcacchusochiahetcho5(i) && SNT(i))
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n%d", count);

}
