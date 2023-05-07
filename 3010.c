#include <stdio.h> 
int factorial(int n) { 
	int mul=1; 
	for(int i=1;i<=n;i++) { 
		mul=mul*i; 
	} 
	return mul; 
} 
int main() { 
	int sum=0; 
	int fact=1; 
	int n,r; 
	scanf("%d",&n); 
	for(int i=1;i<=n;i++) { 
		int k=i; 
		while(k!=0) { 
			r=k%10; 
			fact=factorial(r); 
			k=k/10; 
			sum=sum+fact; 
		} 
		if(sum==i) { 
			printf("%d ",i); 
		} 
		sum=0; 
	} 
}