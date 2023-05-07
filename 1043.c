#include<stdio.h> 
int main() { 
	int a , b ,s=0; 
	int i=1 , 
		n=1 ; 
	scanf("%d" , &a); 
	int c=a; 
	for (a ; a>0 ; a/10) { 
		n=1; 
		b=0; 
		b+=a%10; 
		a=a/10; 
		for (i=1 ; i<=b ; i++) { 
			n= i*n; 
		} 
		s+=n; 
	} 
	if (s==c) { 
		printf("1"); 
	} else 
		printf("0"); 
	return 0; 
}
// a=145 c=145
// b= 5 
// a= 14
// s=s+n = 0+ 1*2*3*4*5
// b = 0+4=4
// a=1
// s= s+n = 1*2*3*4*5 + 1*2*3*4 
// b =1
// a=0
// s = 1*2*3*4*5 +1*2*3*4 + 1
//s=c => ok