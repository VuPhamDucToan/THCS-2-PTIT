#include <stdio.h>
#include <math.h>
int thuannghich(int n) {
    int temp = n;
    int socuoicung = 0;
    int x = 10;
    while (temp != 0) {
        int chusocuoicung = temp % 10;
        socuoicung = socuoicung * x + chusocuoicung;
        temp = temp / 10;
    }
    if (n == socuoicung) {
        return 1;
    }
    else {
        return 0;
    }
}
int chuso9(int n) {
    int count = 0;
    int temp = 0;
    while (n != 0)
    {
        int chusocuoi = n % 10;
        if (chusocuoi == 9) {
            count++;
        }
        else {
            temp++;
        }
        n = n / 10;
    }
    if (count != 0) {
        return 0;
    }
    else {
        return 1;
    }
}
int main() {
    int n; scanf("%d", &n);
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (i < 9) {
            printf("%d ", i);
            count++;
        }
        if (i > 10 && thuannghich(i) && chuso9(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n%d", count);

}
