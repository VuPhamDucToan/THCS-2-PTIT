#include<stdio.h> 
int main() { 
	int m; 
	scanf("%d",&m); 
	while(m--) {
		long long n,i,a[100];
		scanf("%lld",&n);
		for(i=0;i<n;i++) {
			if(i==0||i==1){ 
				a[i]=1;
			} 
			else{
				a[i]=a[i-2]+a[i-1];
			}
		}
		printf("%lld\n",a[n-1]);
	}
}