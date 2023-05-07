#include<stdio.h> 
#include<math.h> 
int main(){ 
	int m,n; 
	scanf("%d%d",&m,&n); 
	int i; 
	int a = sqrt(m); 
	int b = sqrt(n); 
	if(a * a < m){ 
		printf("%d\n",b-a); 
		for(i=a+1;i<=b;i++) { 
			printf("%d\n",i*i); 
		} 
	} else { 
		printf("%d\n",b-a+1); 
		for(i=a;i<=b;i++) { 
			printf("%d\n",i*i); 
		} 
	} 
	return 0; 
}
//  m=10 n=50
// a=3, b= 7
//4
// i=4 ok 
//16
//i=5 ok
// 25
// i=6 ok
// 36
//i =7 ok
// 49
// i=8 ko ok
// stop