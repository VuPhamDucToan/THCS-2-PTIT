#include <stdio.h> 
int main(){ 
	int n,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[i]==-1){ 
			continue;
		} 
		cnt=1;
		for(int j=i+1;j<n;j++){ 
			if(a[j]==a[i]){
				cnt++; 
				a[j]=-1;
			}
		}
		if(cnt>1){ 
			printf("%d ",a[i]);
		}
	}
	if(cnt==0){
		printf("0");
	}
	return 0;
}