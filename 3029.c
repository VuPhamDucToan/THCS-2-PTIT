#include<stdio.h> 
int checkEven(long long n){ 
	while(n>0){ 
		long long even=n%10; 
		if(even%2!=0)
			return 0; 
		n/=10; 
	} 
	return 1; 
} 
int main(){ 
	int t; 
	scanf("%d",&t); 
	while(t>0){ 
		long long n; 
		scanf("%lld",&n); 
		if(checkEven(n))
			printf("YES\n"); 
		else 
			printf("NO\n"); 
		t--; 
	} 
}