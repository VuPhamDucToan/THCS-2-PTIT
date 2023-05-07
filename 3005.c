#include <stdio.h> 
int UCLN(int A, int B) { 
	if (B == 0) 
		return A; 
	return UCLN(B, A%B); 
} 
int main() { 
	int a, b; 
	scanf("%d %d", &a, &b); 
	for (int i = a; i < b; i++) { 
		for (int j = a+1; j <= b; j++) { 
			if (UCLN(i,j)==1) { 
				if (i<j) 
					printf("(%d,%d)\n", i, j); 
			} 
		} 
	} 
	return 0; 
}