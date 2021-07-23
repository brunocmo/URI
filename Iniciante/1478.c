#include <stdio.h>

int main() {

	int x = 0;
	int i = 0;
	int j = 0;

	int inicial = 0;
	int final = 0;
	int valor = 1;
	int M[100][100];

	int iteracao = 0;

	while(1){

	scanf("%d", &x);

	if (x==0) return 0;

	inicial = 0;
	final = x;
	iteracao = x;

	valor = 1;


	while( iteracao != 0  ){

	for(i=inicial; i<final; i++)
		for(j=inicial; j<final; j++)
			M[i][j] = valor+i+j;

	inicial++;
	valor -= 2;
	iteracao--;
	}

	for(i=0; i<x ; i++)
		for(j=0; j<x; j++)
			( j < (x-1) ) ? printf("%3d ", M[i][j]) : printf("%3d\n", M[i][j]);

	putchar('\n');

	}
}

