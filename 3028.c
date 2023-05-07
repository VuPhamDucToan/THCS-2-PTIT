#include<stdio.h> 
#include<math.h> 
int pascal(int n, int k){ 
	if(k == 0 || k == n-1)
		return 1;
	return pascal(n-1, k-1) + pascal(n-1, k);
} int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		for(int k = 0; k < i; k++){
			printf("%d ", pascal(i, k));
		} 
		printf("\n"); 
	}
}