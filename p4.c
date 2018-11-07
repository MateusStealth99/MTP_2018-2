/*p4.c*/
/*mateus da silva fernandes*/
/*11811ETE013*/
#include<stdio.h>
int fun (int m, int n);
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d\n",fun(m,n));
}
 int fun (int m, int n){
	if(m==0){return n+1;}
  if(m>0 && n==0){return fun(m-1,1);}
	if(m>0 && n>0){return fun(m-1,fun(m,n-1));
}}