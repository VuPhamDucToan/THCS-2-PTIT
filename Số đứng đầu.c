#include<stdio.h> 
#define N 1000 
void nhapMang(int mangX[], int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d", &mangX[i]);
	}
}
void soDungDau(int mangX[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		int dem = 1; 
		for (j = i + 1; j < n; j++) {
			if (mangX[i] <= mangX[j]) {
				dem = 0;
				break;
			}
		}
		if (dem) 
			printf("%d ", mangX[i]);
	}
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--) { 
		int n, mangX[N];
		scanf("%d", &n); 
		nhapMang(mangX, n); 
		soDungDau(mangX, n);
		printf("\n");
	}
	return 0; 
}