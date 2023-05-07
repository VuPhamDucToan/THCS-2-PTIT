#include<stdio.h> 
#include <math.h>
int fibo(int n) {
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int fn2 = 0, fn1 = 1;
    for (int i = 3; i <= 1000; i++)
    {
        int fn = fn1 + fn2;
        if (fn == n)
        {
            return 1;
        }
        fn2 = fn1;
        fn1 = fn;

    }
    return 0;


}
int SNt(int n) {
    if (n < 2)
    {
        return 0;
    }
    else {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return 0;
            }

        }
        return n > 1;

    }

}
int checkfibo(int n) {
    int tongchuso = 0;
    while (n != 0)
    {
        tongchuso += n % 10;
        n = n / 10;
    }
    if (fibo(tongchuso))
    {
        return 1;

    }
    else
    {
        return 0;
    }

}
int main() {
    int a, b; scanf("%d %d", &a, &b);
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
        for (int i = a; i <= b; i++)
        {
            if (SNt(i) && checkfibo(i))
            {
                printf("%d ", i);
            }

        }
    }
    else {
        for (int i = a; i <= b; i++)
        {
            if (SNt(i) && checkfibo(i))
            {
                printf("%d ", i);
            }

        }
    }
}
