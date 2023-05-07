#include <stdio.h>
int main() {
	int i;
	scanf("%d\n", &i);
	while (i--) {
		int n; 
		scanf("%d", &n); 
		int i = 1; 
		int count = 0; 
		while (i <= n / i) { 
			if (n % i == 0) { 
				if (i % 2 == 0) 
					count++; 
				if (n / i % 2 == 0) 
					count++; 
				if (n / i == i && i % 2 == 0)
					count--;
			} 
			i++; 
		} 
		printf("%d\n", count);
	}
}
// n=4 i=2 
// c=1
// c=2
// c=1
//