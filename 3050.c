#include <stdio.h> 
#include <math.h> 
int main() {
    int t, a, b, c, d, x, check = 1;
    scanf("%d", &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    if (a == c || a == d)
        x = a;
    if (b == c || b == d)
        x = b;
    t -= 3;
    while (t--) {
        scanf("%d %d", &a, &b);
        if (a != x && b != x)
            check = 0;
    }
    if (check == 1)
        printf("Yes");
    if (check == 0)
        printf("No");
}
