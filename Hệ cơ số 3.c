#include<stdio.h>
#include<string.h>
 int main(){
	 int T;
	 scanf("%d",&T);
	 getchar(); 
     while(T--){ 
char s[20] = ""; 
scanf("%s",s);
 int len = strlen(s);
 int check = 1;
 for(int i = 0; i < len; i++){ 
switch(s[i]){
case '0': 
case '1':
case '2':
break;
default:
	check = 0;
	break;
}
if(check == 0)
break;
 }
 if(check){ 
	 printf("YES");
 }
 else{
	 printf("NO");
 }
 printf("\n");
	 }
 }