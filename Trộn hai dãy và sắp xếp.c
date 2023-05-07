#include<stdio.h> 
int main(){
	int n,t; 
	scanf("%d", &t);
	for(int k=1; k<=t; k++){
		scanf("%d", &n);
		int a[100], b[100];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		for(int i=0; i<n; i++){
			scanf("%d", &b[i]); 
		} 
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(a[i] > a[j]){ 
					int temp = a[i]; 
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(b[i] < b[j]){
					int temp = b[i];
					b[i] = b[j];
					b[j] = temp;
				}
			}
		}
		printf("Test %d:\n", k);
		int c[200];
		int ak=0, bk=0;
		for(int i=0; i<2*n; i++){
			if(i % 2 == 0){ 
				c[i] = a[ak];
				ak++;
			}
			else{
				c[i] = b[bk];
				bk++;
			}
		}
		for(int i=0; i<2*n; i++){
			printf("%d ", c[i]);
		}
		printf("\n");
	}
}