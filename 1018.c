#include<stdio.h> 
#include<math.h> 
int main(){
	int t;
	scanf("%d",&t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int a = sqrt(n);
		if (n == (int)a * a) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}