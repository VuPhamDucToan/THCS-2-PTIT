#include<stdio.h> 
int main(){ 
	int t; 
	scanf("%d",&t); 
	while(t--){ 
		long long sum=1,num; 
		int n; 
		scanf("%d",&n); 
		for(int i=2;i<=n;i++){ 
			int u=i; 
			if(sum%i!=0){ 
				while(u<=n){
					num=u; u*=i; 
				} 
				sum*=num; 
			} 
		} 
		printf("%lld\n",sum); 
	} 
}