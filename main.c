#include <stdio.h>

int main(void)
{
    int x;
    double ans;

    scanf("%d", &x);

    ans = 1.0 / (double)(x + 100);

    printf("%.15f\n", ans);

    return 0;
}

