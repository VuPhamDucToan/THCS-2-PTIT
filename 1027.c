#include <stdio.h> 
int main() { 
	int n; 
	int a,b,c; 
	scanf("%d",&n); 
	for(int i = 0; i<n; i++) { 
		scanf("%d %d",&a,&b); 
		while (a != b) { 
			if (a > b) { 
				c = a; 
				a = a - b; 
				b = c; 
			} else { 
				b -= a; 
			} 
		} 
		printf("%d\n",a); 
	} 
	return 0; 
}
