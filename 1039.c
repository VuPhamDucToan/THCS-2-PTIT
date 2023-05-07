#include<stdio.h> 
int main () { 
	int n; 
	int dem = 0; 
	scanf("%d", &n); 
	for (;n!=0;) { 
		dem++; 
		n = n/10; 
	} 
	printf("%d", dem); 
}
// n=1234 dem =1
// n =123 dem =2
// n= 12 dem =3
// n= 1 dem =4
// m =0 stop