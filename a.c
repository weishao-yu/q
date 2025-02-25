#include <stdio.h>

int main() {
    int a, b, product;

    // 輸入兩個整數
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // 計算乘積
    product = a * b;

    // 輸出結果
    printf("Product: %d\n", product);

    return 0;
}