#include<stdio.h> 
#include<math.h> 
long long check(long long m){ 
	int ansle=0,ansc=0,n; 
	while(m!=0){ 
		n=m%10; 
		if(n%2!=0) 
			ansle+=1; 
		else 
			ansc+=1; 
		m/=10; 
	} 
	if(ansle>ansc) 
		return 1; 
	return 0; 
} 
int main(){ 
	int b; 
	scanf("%d", &b); 
	while(b--){ 
		long long a; 
		scanf("%lld", &a); 
		if(a%2!=0){ 
			if(check(a)==1) 
				printf("YES\n"); 
			else 
				printf("NO\n"); 
		} 
		else 
			printf("NO\n"); 
	} 
	return 0; 
}