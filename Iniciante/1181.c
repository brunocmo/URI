#include <stdio.h> 

const int TOTAL_LINHAS = 12;
const int TOTAL_COLUNAS = 12;

int main() {

	float M[TOTAL_LINHAS][TOTAL_COLUNAS];

	int inputLinhas;
	char inputSouM;

	float totalResultado = 0.0f;

	int i = 0;
	int j = 0;

	scanf("%d", &inputLinhas);
	scanf(" %c", &inputSouM);

	for ( i=0 ; i<TOTAL_LINHAS ; i++ )
		for ( j=0; j<TOTAL_COLUNAS ; j++ )
			scanf(" %f", &M[i][j]);

	
	if( inputSouM == 'S' ) {	
		for( j=0; j<TOTAL_COLUNAS; j++) 
			totalResultado += M[(inputLinhas)][j];
	} 
	else {
		for( j=0; j<TOTAL_COLUNAS; j++) 
			totalResultado += M[(inputLinhas)][j];
	
		totalResultado /= TOTAL_COLUNAS;
	}

	printf("%.1f\n", totalResultado);



	return 0;
}
	
