#include<stdio.h> 
int main() { 
	int t; 
	scanf ("%d",&t); 
	int x=0, demchan=0, demle=0; 
	while (t!=0) { 
		x = t%10; 
		if (x%2==0) 
			demchan++; 
		else 
			demle++; 
		t/=10; 
	} 
	printf ("%d %d",demle,demchan); 
	return 0; 
}
// t = 13456
//  t != 0 => x=6
//  demchan = 1
// t= 1345
//  x= 5
// demle = 1
// t = 134
// x= 4
// demchan 2
// t =13
// x= 3
// demle = 2
// t=1
// x=1
// demle = 3
//
