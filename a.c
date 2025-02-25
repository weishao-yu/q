#include <stdio.h>

int main() {
	int a, b, sum;

	// 輸入兩個整數
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);

	// 計算和
	sum = a + b;

	// 輸出結果
	printf("Sum: %d\n", sum);

	return 0;
}