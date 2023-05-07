#include <stdio.h> 
int main() { 
	int n; 
	scanf("%d", &n); 
	if (n>=6 && n<28) {
		printf("6");
	} else { 
		if (n>=28 && n<496) {
			printf("6 28");
		} else { 
			if (n>=496 && n<8128) {
				printf("6 28 496");
			} else 
				printf("6 28 496 8128") ;
		} 
	} 
}