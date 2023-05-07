#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n); 
	int i, a[100];
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int j, k;
	for (i = 0; i < n; i++) {
		int dem = 0;
		for (j = 0; j < n; j++) {
			if(a[i]==a[j]){
				if (i != j) {
					for (k = j; k < n; k++) {
						a[k] = a[k + 1];
					}
					n--;
					j--;
				}
				dem++;
			}
		}
		if (dem != 0) {
			printf("%d %d\n", a[i], dem);
		}
	}
}

