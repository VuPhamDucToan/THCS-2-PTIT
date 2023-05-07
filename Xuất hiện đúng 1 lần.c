#include<stdio.h>
#define N 100
void nhapMang(int mangX[], int n) {
	for (int i = 0; i < n; i++) { 
		scanf("%d", &mangX[i]);
	}
}
void demPhanTu(int mangX[], int n) {
	int i, j, mangY[N] = {0}; 
	int dem1 = 0;
	for (i = 0; i < n; i++) {
		int dem2 = 0; 
		for (j = 0; j < n; j++) {
			if (i == j)
				continue;
			else if (mangX[i] == mangX[j]) {
				dem2 = 1; 
			}
		}
		if (dem2 == 0) { 
			dem1++; 
			mangY[i] = mangX[i];
		}
	}
	printf("%d\n", dem1);
	for (i = 0; i < n; i++) { 
		if (mangY[i] != 0) 
			printf("%d ", mangY[i]); 
	}
}
int main() {
	int n, mangX[N];
	scanf("%d", &n);
	nhapMang(mangX, n);
	demPhanTu(mangX, n); 
	return 0; 
}