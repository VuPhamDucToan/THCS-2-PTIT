#include<stdio.h> 
int main(){ 
	int n; 
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	} 
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){ 
			if(a[i]>=a[j]){
				int tmp=a[i]; 
				a[i]=a[j];
				a[j]=tmp; 
			}
		}
	}
	for(int i=0;i<n-1;i++){
		if(a[i]<a[i+1]) {
			printf("%d %d",a[i],a[i+1]);
			break;
		}
	}
}