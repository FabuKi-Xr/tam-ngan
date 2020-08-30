#include<stdio.h>
int main() {
	int N, i, j, k;
	printf("Enter number : ");
	scanf_s("%d", &N);
	for (i = 1;i <= N;i++) {
		for (j = 1;j <= N - i;j++) {
			printf(" ");
		}
		for (k = 1;k <= 2 * i - 1;k++) {
			printf("%c", 64 + k);
		}
		printf("\n");
	}
}