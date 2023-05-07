#include <stdio.h>
int main()
{
    int a[100], b[100], n, m, p, i;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    scanf("%d", &p);
    for (i = n - 1; i >= p - 1; i--)
        a[i + m] = a[i];
    for (i = 0; i < m; i++)
        a[p + i] = b[i];
    for (i = 0; i < n + m; i++)
        printf("%d ", a[i]);
    return 0;
}

