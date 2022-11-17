#include<stdio.h>

int main() {
    int a = 10, b = 20, c;
    int *p, *q;
    p = &a;
    q = &b;
    (*p)++;
    c = *p + *q;
    printf("%d", c);
    return 0;
}