#include <stdio.h>

int expoente( int a, int b) {

	int i = 0;
	int valor = a;

	if ( b == 0 ) return 1;
	
	for(i=1; i<b ;i++) valor *= a;

	return valor;
}

int main() {

	int x = 0;
	int i = 0;
	int j = 0;

	int inicial = 0;
	int final = 0;
	// int valor = 1;
	int M[100][100];

	int iteracao = 0;

	while(1){

	scanf("%d", &x);

	if (x==0) return 0;

	inicial = 0;
	final = x;
	iteracao = x;

	// valor = 1;


	while( iteracao != 0  ){

	for(i=inicial; i<final; i++)
		for(j=inicial; j<final; j++)
			M[i][j] = expoente( 2 , (i+j) );

	iteracao=0;
	}

	for(i=0; i<x ; i++)
		for(j=0; j<x; j++)
			( j < (x-1) ) ? printf("%3d ", M[i][j]) : printf("%3d\n", M[i][j]);

	putchar('\n');

	}
}

