#include <stdio.h>

int main()
{

    int a;
    int b;
    int c;
    int d;
    int e;

    scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);

    printf("%d", (a * a + b * b + c * c + d * d + e * e) % 10);

    return 0;
}
