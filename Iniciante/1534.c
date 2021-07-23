#include <stdio.h>

int main() {

	int valorInput = 0;
	int i;
	int j;
	int matriz[70][70];

	const int valorIgual = 1;
	const int valorQualquer = 3;
	const int valorSoma = 2;

	while( scanf("%d", &valorInput) == 1 ) {


		for(i=0; i<valorInput ; i++)
			for( j=0; j<valorInput ; j++) {
				if ( (i+j) == (valorInput-1)  ) 
					matriz[i][j] = valorSoma;
				else {
					if( i == j )
						matriz[i][j] = valorIgual;
					else	matriz[i][j] = valorQualquer;
				}	
			}

		for(i=0; i<valorInput ; i++)
			for( j=0; j<valorInput ; j++)
			   ( j == (valorInput-1) ) ? printf("%d\n", matriz[i][j]): 
			   			     printf("%d", matriz[i][j]);
	}

	return 0; 
}

