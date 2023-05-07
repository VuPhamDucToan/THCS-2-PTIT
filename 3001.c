#include<stdio.h> 
int main() { 
	int i; 
	scanf("%d\n",&i); 
	while (i--) { 
		int s=0,n, m; 
		scanf("%d",&n); 
		while (n>0) { 
			m=n%10; 
			s+=m; 
			n=n/10; 
		} 	
		if (s % 10 ==0 ){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	} 
}
// n=1234
// m=4 s=4 n=123
// m=3 s=7 n=12
// m=2 s=9 n=1
// m=1 s=10 n=0 stop
//