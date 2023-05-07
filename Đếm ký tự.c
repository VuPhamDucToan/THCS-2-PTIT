#include<stdio.h> 
#include<string.h>
#include<ctype.h>
#define N 1000
int main() {
	char xau[N];
	int dem1 = 0, dem2 = 0, dem3 = 0; 
	gets(xau); 
	for (int i = 0; i < strlen(xau); i++) { 
		if (isalpha(xau[i]))
			dem1++; 
		else if (isdigit(xau[i])) 
			dem2++;
		else dem3++; 
	}
	printf("%d %d %d", dem1, dem2, dem3);
	return 0;
 }