#include<stdio.h>

int main() {
    int vetor[] = {10, 22, 33, 54, 25}, *ptr;
    ptr = vetor + 3;
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", *ptr);
    return 0;
}