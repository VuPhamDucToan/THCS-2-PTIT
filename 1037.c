#include<stdio.h> 
int main() { 
	int a,b; 
	int i; 
	int sum; 
	scanf("%d%d",&a,&b); 
	sum=0; 
	if(a>b) { 
		i=b; 
		for(i;i<=a;i++) { 
			sum=sum+i; 
		}
		printf("%d",sum); 
	} else { 
		i=a; 
		for(i;i<=b;i++) { 
			sum=sum+i; 
		}
		printf("%d",sum); 
	} 
} 
// 1 10
// i=a=1 
// sum =1
// tien den i=10
// sum = sum + i = 1+2+3+4+5+6+7+8+9+10 =55