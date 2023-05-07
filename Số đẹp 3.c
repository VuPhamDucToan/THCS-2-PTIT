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
int tongcacchuso(int n) {
    int tongcacchuso = 0;
    while (n != 0) {
        tongcacchuso += (n % 10);
        n = n / 10;
    }
    if ((tongcacchuso % 10) == 8) {
        return 1;
    }
    else {
        return 0;
    }
}
int chuso6(int n) {
    int count = 0;
    int temp = 0;
    while (n != 0)
    {
        int chusocuoi = n % 10;
        if (chusocuoi == 6) {
            count++;
        }
        else {
            temp++;
        }
        n = n / 10;
    }
    if (count != 0) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    int a, b; scanf("%d %d", &a, &b);
    if (a > b) {
        for (int i = b; i <= a; i++) {
            if (thuannghich(i) && tongcacchuso(i) && chuso6(i)) {
                printf("%d ", i);
            }
        }
    }
    else {
        for (int i = a; i <= b; i++) {
            if (thuannghich(i) && tongcacchuso(i) && chuso6(i)) {
                printf("%d ", i);
            }
        }
    }
}
