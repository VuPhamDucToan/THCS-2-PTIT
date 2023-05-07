#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool chuso4(int n) {
    int dem = 0;
    while (n != 0) {
        int chusocuoi = n % 10;
        if (chusocuoi == 4) {
            return false;
        }
        else {
            dem++;
        }
        n = n / 10;
    }
    if (dem != 0) {
        return true;
    }
}
bool tongchuso(int n) {
    int tong = 0;
    while (n != 0) {
        tong += (n % 10);
        n = n / 10;
    }
    if (tong % 10 == 0) {
        return true;
    }
    else {
        return false;
    }
}
bool thuannghich(int n) {
    int demo = n;
    int socuoi = 0;
    while (demo > 0) {
        int chusocuoi = demo % 10;
        socuoi = socuoi * 10 + chusocuoi;
        demo = demo / 10;
    }
    if (socuoi == n) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    int t; scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        for (int i = pow(10, n - 1); i < pow(10, n); i++) {
            if (chuso4(i) && thuannghich(i) && tongchuso(i)) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}
