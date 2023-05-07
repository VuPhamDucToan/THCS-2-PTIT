#include<stdio.h> 
int main () { 
	int cr, cd; 
	scanf ("%d %d", &cr, &cd); 
	int i = 1;
	for (i=1; i <= cd; i++) { 
		int j = 1;
		for (j=1; j <= cr; j++) { 
			if (i==1||i==cd||j==1||j==cr) { 
				printf ("*");
			} else
				printf(" "); 
		} 
		printf("\n\n");
	} 
}
// cr=5 cd=4
// i=1 