#include <stdio.h> 
int main() {
    long long n; scanf("%lld", &n);
    int so2 = 0;
    int so3 = 0;
    int so5 = 0;
    int so7 = 0;
    while (n != 0)
    {
        int chusocuoi = n % 10;
        switch (chusocuoi) {
        case 2:
            so2++;
            break;
        case 3:
            so3++;
            break;
        case 5:
            so5++;
            break;
        case 7:
            so7++;
            break;
        }
        n = n / 10;
    }
    if (so2 != 0)
    {
        printf("2 %d\n", so2);
    }
    if (so3 != 0)
    {
        printf("3 %d\n", so3);
    }
    if (so5 != 0)
    {
        printf("5 %d\n", so5);
    }
    if (so7 != 0)
    {
        printf("7 %d\n", so7);
    }




}
