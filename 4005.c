#include<stdio.h> 
int main() { 
	int n,test;
	scanf("%d",&test);
	while(test--){
		scanf("%d",&n);
		long a[100];
		for (int i=0;i<n;i++){ 
			scanf("%ld",&a[i]);
		}
		long max=a[0];
		for(int i=0;i<n;i++){
			if(a[i]>=max){
				max=a[i]; 
			}
		}
		printf("%ld\n",max);
		for(int i=0;i<n;i++){
			if(a[i]==max){ 
				printf("%d ",i); 
			}
		}
		printf("\n");
	}
	return 0;
}