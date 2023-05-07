#include<stdio.h> 
int main () { 
	int n; 
	int demc=0,deml=0; 
	scanf("%d",&n); 
	while(n--) { 
		demc=0; deml=0; 
		long int a; 
		scanf("%ld",&a); 
		while(a>0) { 
			if((a%10)%2==0) { 
				demc++; 
			} else { 
				deml++; 
			} 
			a/=10; 
		} 
		if(demc>deml) 
			printf("YES\n"); 
		else 
			printf("NO\n"); 
	} 
}