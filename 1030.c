#include<stdio.h> 
int main(){ 
	int a; 
	scanf("%d", &a); 
	while ( a--) { 
		int b; 
		scanf("%d", &b); 
		int i=2; 
		while (b > 1) {
			if (b % i == 0) {
				printf("%d ", i); 
				b = b / i;
			}
			else
			{
				i = i + 1;
			}
		}
			 printf("\n"); 
	} 
}
// b=10
// 2
// b=5
// i=3
// i=4
// i=5
// 5
// b=1
//ok