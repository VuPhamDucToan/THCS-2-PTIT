#include <stdio.h> 
long long gcd (long long a, long long b) { 
	long long r; 
	while (b!=0) { 
		r = a%b; 
		a = b; 
		b = r; 
	} 
	return a; 
} 
int main() { 
	long long a, b; 
	scanf("%lld %lld", &a, &b); 
	long long ucln = gcd(a,b), bcnn = a*b/ucln; 
	printf("%lld\n%lld", ucln, bcnn); 
}
// a = 2 , b = 5
// r = 2 a =5 b =2 
// r = 1 a =2 b =1 
// r= 0 a=1 b=0
//  a=1
// 
//