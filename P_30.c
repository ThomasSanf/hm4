#include <stdio.h>

void inverse(int *b);

int main()
{
    int a[3] = {3, 5, 7};
    int i;
    for (i = 0; i < 3; i++)
        printf("%d ", a[i]);
    printf("\n");
    inverse(a);
    for (i = 0; i < 3; i++)
        printf("%d ", a[i]);
    printf("\n");
    getchar();

    return 0;
}

void inverse(int *b)
{
    int tmp, i;
    for (i = 0; i < 3 / 2; i++) {
        tmp = b[i];
        b[i] = b[2 - i];
        b[2 - i] = tmp;
    }
}
