#include<stdio.h> 
int main(){ 
	int n,f,k,c=0,d,i; 
	int a[100]; 
	scanf("%d",&n); 
	for(i=0;i<n;i++){
		scanf("%d",&k);
		for(f=0;f<k;f++){
			scanf("%d",&a[f]);
		} 
		if(k%2==0){
			for(f=k/2-1;f>=0;f--){
				c=a[f];
			} 
			for(f=k/2;f<k;f++){
				d=a[f];
			} 
			if(c==d) 
				printf("YES");
			else 
				printf("NO");
		}
		if(k%2!=0){
			for(f=k/2-1;f>=0;f--){
				c=a[f];
			}
			for(f=k/2+1;f<k;f++){
				d=a[f];
			}
			if(c==d) 
				printf("YES");
			else
				printf("NO");
		}
		printf("\n");
	} 
}