#include<stdio.h>

int resto(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return resto(a - b, b);
    }
}

int main() {
    printf("%d\n", resto(14, 5));
    return 0;
}