#include<stdio.h>
#define N 99 
void nhapMang(int mangX[], int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d", &mangX[i]); 
	}
}
void demPhanTu(int mangX[], int n) {
	int mangY[N] = {0};
	int i, j, dem = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == j)
				continue;
			else if (mangX[i] == mangX[j]) {
				mangX[j] = 0;
				mangY[i] = mangX[i];
			}
		}
		if (mangY[i] != 0) 
			dem++; 
	} 
	printf("%d\n", dem); 
	for (i =0; i < n; i++) {
		if (mangY[i] > 0)
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