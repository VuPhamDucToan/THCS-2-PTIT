#include<stdio.h> 
int main() {
	int n, t;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &t);
		int x = 0, demchan = 0, demle = 0;
		while (t != 0) {
			x = t % 10;
			if (x % 2 == 0)
				demchan++;
			else
				demle++;
			t /= 10;
		}

		printf("%d %d\n", demle, demchan);
	}
	return 0;
}