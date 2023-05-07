#include<stdio.h> 
#define N 100
void nhapMang(int mangX[], int n) { 
	for (int i = 0; i < n; i++) {
		scanf("%d", &mangX[i]); 
	}
}
void boTrungNhau(int mangX[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) { 
			if (i == j)
				continue;
			else if (mangX[i] == mangX[j]) {
				mangX[j] = 0;
			}
		}
	}
	for (i = 0; i < n; i++) {
		if (mangX[i] > 0)
			printf("%d ", mangX[i]); 
	}
}
int main() {
	int n, mangX[N];
	scanf("%d", &n);
	nhapMang(mangX, n);
	boTrungNhau(mangX, n); 
	return 0;
}