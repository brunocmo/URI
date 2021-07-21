#include <stdio.h> 

const int TOTAL_LINHAS = 12;
const int TOTAL_COLUNAS = 12;

int main() {

	float M[TOTAL_LINHAS][TOTAL_COLUNAS];
	char inputSouM;

	float totalResultado = 0.0f;

	int i = 0;
	int j = 0;

	scanf(" %c", &inputSouM);

	for ( i=0 ; i<TOTAL_LINHAS ; i++ )
		for ( j=0; j<TOTAL_COLUNAS ; j++ )
			scanf(" %f", &M[i][j]);

	
	if( inputSouM == 'S' ) {	
		for( i=0; i<TOTAL_LINHAS; i++)
		       for( j=0; j<TOTAL_COLUNAS; j++){
			if( j<i ) 
			totalResultado += M[i][j];
		       }
	} 
	else {
		for( i=0; i<TOTAL_LINHAS; i++)
		       for( j=0; j<TOTAL_COLUNAS; j++){
			if( j<i ) 
			totalResultado += M[i][j];
		       }
		totalResultado /=( ( (TOTAL_LINHAS * TOTAL_COLUNAS) - TOTAL_LINHAS )/2 );
	}

	printf("%.1f\n", totalResultado);



	return 0;
}
	
