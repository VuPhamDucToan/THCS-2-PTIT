#include<stdio.h>
#define M 9
#define N 9
void nhapMang(int mangX[N][M], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &mangX[i][j]);
		}
	}
}
void chuyenVi(int mangX[N][M], int n, int m) {
	int mangY[N][M]; 
	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			mangY[i][j] = mangX[j][i]; 
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", mangY[i][j]); 
		}
		printf("\n");
	}
}
int main() {
	int n, m, mangX[N][M];
	scanf("%d %d", &n, &m);
	nhapMang(mangX, n, m);
	chuyenVi(mangX, n, m);
	return 0;
}