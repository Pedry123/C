#include<stdio.h>
#include<math.h>
int sum = 0, res;

int reverse(int n) {    
    if(n > 0) {
        res = n % 10;
        sum = sum * 10 + res;
        return reverse(n / 10);
    }
    return sum;
    /*
    while (n > 0) {
        inv = inv * 10 + n % 10;    
        n /= 10;
    }
    */
}

int main() {
    int n = 1284353;
    printf("%d", reverse(n)); 
    return 0;
}