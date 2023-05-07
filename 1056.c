#include<stdio.h> 
int main() { 
	int t; 
	scanf("%d",&t); 
	while(t--) { 
		int d1, d2; 
		long N; 
		scanf("%ld",&N); 
		while(N>=0) { 
			d1 = N%10; 
			N /= 10; 
			d2 = N%10; 
			if(d2>d1) { 
				printf("NO\n"); 
				break; 
			} 
			if(N==0) { 
				printf("YES\n"); 
				break; 
			} 
		} 
	} 
}
// n = 12345678
// d1=8 n = 1234567 d2 =7 
// yes ...
//