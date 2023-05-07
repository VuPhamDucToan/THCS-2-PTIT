#include <stdio.h> 
int check(int a){ 
	int tong=0; 
	while(a>0){ 
		tong+=a%10; 
		a/=10; 
	} 
	return tong; 
} 
int main(){ 
	int a,b; 
	scanf("%d%d",&a,&b); 
	if(check(a)<=check(b)){ 
		printf("%d %d",a,b); 
	}else 
		printf("%d %d",b,a); 
}