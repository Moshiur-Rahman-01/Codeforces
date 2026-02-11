#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
        if (a[i] == b[i])
            printf("Square\n");
        else
            printf("Rectangle\n");
    }
    return 0;
}