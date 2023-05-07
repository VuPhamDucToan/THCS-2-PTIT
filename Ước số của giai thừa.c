#include <stdio.h>
#include <math.h>
int main() {
    int t; scanf("%d", &t);
    while (t--)
    {
        int a, b; scanf("%d %d", &a, &b);
        int count = 0;
        for (int i = 2; i <= a; i++)
        {
            int x = i;
            while (x % b == 0)
            {
                count++;
                x /= b;
            }

        }
        printf("%d\n", count);

    }

}
