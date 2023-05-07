#include<stdio.h> 
int main(){ 
	int n,i; 
	scanf("%d",&n); 
	int m = 1; 
	while (n>0) { 
		m *= n%10; // m = m * n%10
		n /= 10; 
	} 
	printf("%d",m); 
	return 0; 
}
// n=1234  m=1
// m = 1* 4=4
// n=123
// m=4*3=12
// n=12
// m = 12*2=24
// n =1
// m=24*1=24
// n=0
//stop

