#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[100];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		} 
		long long tong=a[0];
		long long max=a[0];
		for(int i=1;i<n;i++){
			if (a[i] >= (tong + a[i])) {
				tong = a[i];
			}
			else { tong += a[i];
			}
			if (tong > max) max = tong;
		} 
		printf("%lld\n", max);
	}
}