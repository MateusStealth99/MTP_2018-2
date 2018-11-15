/* P6.c */
/* mateus da silva fernandes  */
/* 11811ETE013 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define pi 3.141592653589793

typedef struct{
	 double x,y;
}  Ponto;

int main(){
	int N, i; 
	 float a;
   	 Ponto *coordenadas;
   	scanf("%i", &N);
	getchar();
   	coordenadas = (Ponto *) malloc(N*sizeof(Ponto)); 
   	for(i=0; i<N; i++){
   	       	a = ((i*2.0*pi)/(N-1));
   		coordenadas->x= cos(a);
   		coordenadas->y= sin(a);
   		printf("(%.3f, %.3f) ", coordenadas->x, coordenadas->y);
   	}
	free(coordenadas);
   	 return 0;
}	