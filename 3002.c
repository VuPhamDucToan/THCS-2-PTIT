#include <stdio.h> 
#include <math.h> 
int ktrasonguyento(int n){ 
	for (int i=2; i<=sqrt(n); i++){ 
		if (n%i==0) 
			return 0; 
	} return 1; 
} 
int main(){ 
	int n;
	scanf("%d",&n); 
	for (int i=2; i<n; i++) { 
		int ktra=ktrasonguyento(i); 
		if (ktra==1) 
			printf("%d\n",i); 
	} 
}
//n=10 
//