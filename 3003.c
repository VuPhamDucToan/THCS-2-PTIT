#include<stdio.h> 
#include<math.h> 
int snt(int i) { 
	for (int a=2; a<=sqrt(i); a++) { 
		if (i%a==0) { 
			return 0; 
			break; 
		} 
	} 
	return 1; 
} int main() { 
	int n; 
	scanf("%d", &n); 
	for (int i=2;n>0 ; i++) { 
		if (snt(i) == 1) { 
			printf("%d\n", i); 
			n--; 
		} 
	} 
}