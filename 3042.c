#include <stdio.h>
#include <stdbool.h>
bool sogiam(int n) {
    int chusosau = n % 10;
    int demo = 0;
    n = n / 10;
    while (n != 0)
    {
        int chusotruoc = n % 10;
        if (chusosau < chusotruoc)
        {
            demo++;
        }
        else
        {
            return false;
        }
        chusosau = chusotruoc;
        n /= 10;

    }
    if (demo != 0)
    {
        return true;
    }


}
int main() {
    int t; scanf("%d", &t);
    while (t--) {
        int a, b; scanf("%d %d", &a, &b);
        int sosogiam = 0;
        for (int i = a; i <= b; i++)
        {
            if (sogiam(i))
            {
                sosogiam++;
            }

        }
        printf("%d\n", sosogiam);
    }
}
