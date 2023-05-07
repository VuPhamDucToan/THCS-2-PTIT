#include<stdio.h> 
#include<math.h>
int main(){ 
	int t;
	scanf("%d", &t); 
	while(t--){
		int n;
		scanf("%d", &n);
		int dem=0;
		int a[10]={1000,500,200,100,50,20,10,5,2,1}; 
		for(int i=0;i<10;){
			if(n>=a[i]){ 
				dem+=n/a[i]; 
				n=n%a[i];
			}
			else
				i++;
		}
		printf("%d\n", dem);
	}
	return 0; 
}