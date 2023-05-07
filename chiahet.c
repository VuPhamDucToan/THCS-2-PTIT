#include <stdio.h>
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	int dem = 0;
	for (int i = 2; i <= n; i += 2) {
		int b = i;
		while (i%2==0){
			dem++;
			i = i / 2;
		}
		i = b;
	}
	if (dem>=k)
	{
		printf("Yes");
	}
	else {
		printf("No");
	}
}