#include<stdio.h>
#define N 100 
void nhapMang(int mangX[], int n) {
	for (int i = 0; i < n; i++) { 
		scanf("%d", &mangX[i]);
	}
}
int demPhanTu(int mangX[], int n) {
	int i, dem = 0;
	for (i = 0; i < n - 1; i++) {
		if (mangX[i] == mangX[i+1])
			dem++; 
	}
	printf("%d\n", dem);
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, mangX[N];
		scanf("%d", &n);
		nhapMang(mangX, n);
		demPhanTu(mangX, n); 
	}
	return 0; 
}