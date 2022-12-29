#include <stdio.h>

// int sum(int a, int *b)
// int sum(a, int *b) // error. must declare type of all vars
int sum(a, b)
// int a;
int *b;
{
    int c = a + *b;
    printf("%d\n", c);

    return c;
}

int main(void)
{
    int b = 2;
    int c = sum(1, &b);

    printf("%d\n", c);
}
