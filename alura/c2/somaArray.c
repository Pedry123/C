#include<stdio.h>

int soma(int nums[], int tamanho) {
    int somador = 0;
    for (int i = 0; i < tamanho; i++) {
        somador += nums[i];
    }
    return somador;
}
// arrays são ponteiros por natureza
int main() {
    int nums[3];

    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;
    int total = soma(nums, 3);
}