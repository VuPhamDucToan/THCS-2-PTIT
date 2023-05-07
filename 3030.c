#include <stdio.h> 
#include <math.h> 
int C03030(int n){ 
	while(n!=0){ 
		int temp = n/10; 
		if(n%10 < temp%10) 
			return 0; 
		n = n/10; 
	} 
	return 1; 
} 
int main(){ 
	int n; 
	scanf("%d",&n); 
	while(n--){ 
		int a; 
		scanf("%d",&a); 
		int c=pow(10,a-1); 
		int d=pow(10,a); 
		for(int i = c;i<d;i++){ 
			if(i%10<(i/c))
				continue; 
			if(C03030(i))
				printf("%d ",i); 
		} 
		printf("\n"); 
	} 
	return 0; 
}