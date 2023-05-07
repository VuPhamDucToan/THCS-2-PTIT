#include <stdio.h> 
#include <math.h> 
int kiemtrasonguyentotrongmang(int n){ 
	if(n<=1) 
		return 0; 
	for(int i=2;i<=sqrt(n);i++){ 
		if(n%i==0){ 
			return 0; 
			break; 
		} 
	}
	return 1; 
} 
int main(){ 
	int n,m,a[100]; 
	scanf("%d",&m); 
	while(m--){ 
		scanf("%d",&n); 
		for(int i=1;i<=n;i++){ 
			scanf("%d",&a[i]); 
		} 
		for(int i=1;i<=n;i++){
			if(kiemtrasonguyentotrongmang(a[i])==1){ 
				printf("%d\t",a[i]); 
			} 
		}
		printf("\n"); 
	} 
}