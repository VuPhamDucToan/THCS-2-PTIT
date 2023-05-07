#include<stdio.h> 
int kt(long long a) {
	long long x=a,s=0; 
	long long A[10]={1,1,2,6,24,120,720,5040,40320,362880}; 
	while ( a>0) { 
		s=s+A[a%10]; 
		a=a/10; 
	} 
	if ( x==s) 
		return 1; 
	else 
		return 0; 
} 
int main(){ 
	long long a,b; 
	scanf("%lld%lld",&a,&b); 
	if (a>b) { 
		long long tmp=b; 
		b=a; 
		a=tmp; 
	} 
	for( long long i=a; i<=b;i++) 
		if ( kt(i)) 
			printf("%lld ",i); 
}