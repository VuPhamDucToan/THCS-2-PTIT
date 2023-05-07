#include <stdio.h> 
#include <math.h>
int main() {
    int a1, b1, a2, b2, a3, b3;
    scanf("%d %d", &a1, &b1);
    scanf("%d %d", &a2, &b2);
    scanf("%d %d", &a3, &b3);
    int S = a1 * b1 + a2 * b2 + a3 * b3;
    int nuaCVn = a1 + b1 + a2 + b2 + a3 + b3; int Cmax = a1;
    if (b1 > Cmax) Cmax = b1;
    if (a2 > Cmax) Cmax = a2;
    if (b2 > Cmax) Cmax = b2;
    if (a3 > Cmax) Cmax = a3;
    if (b3 > Cmax) Cmax = b3;
    int Cvuong = sqrt(S);
    if (Cvuong * Cvuong != S) {
        printf("NO");
        return 0;
    }
    int CVv = Cvuong * 4;
    if (nuaCVn == CVv && Cmax == Cvuong) printf("YES");
    else {
        int d = CVv - nuaCVn;
        if ((a1 == d || a2 == d || a3 == d || b1 == d || b2 == d || b3 == d) && Cmax == Cvuong) {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
}

