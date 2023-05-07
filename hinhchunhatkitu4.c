#include <stdio.h>
int main() {
	int r, c;
	scanf("%d%d", &r, &c);
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			if ((i - j) >= (r - c)) {
				printf("%c", r + 1 - i + j - 1 + 64);
			}
			else
				printf("%c", c + 64);
		} printf("\n");
	}
	return 0;
}