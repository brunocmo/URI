#include <stdio.h> 

const int TOTAL_LINHAS = 12;
const int TOTAL_COLUNAS = 12;

int main() {

	double M[TOTAL_LINHAS][TOTAL_COLUNAS];
	char inputSouM;

	double totalResultado = 0.0f;

	int i = 0;
	int j = 0;

	scanf(" %c", &inputSouM);

	for ( i=0 ; i<TOTAL_LINHAS ; i++ )
		for ( j=0; j<TOTAL_COLUNAS ; j++ )
			scanf(" %lf", &M[i][j]);

	
	if( inputSouM == 'S' ) {	
		for( i=0; i<TOTAL_LINHAS; i++)
		       for( j=0; j<TOTAL_COLUNAS; j++){
			if( (j > ( (TOTAL_COLUNAS-1) - i ) ) && ( j < i) ) 
			totalResultado += M[i][j];
		       }
	} 
	else {
		for( i=0; i<TOTAL_LINHAS; i++)
		       for( j=0; j<TOTAL_COLUNAS; j++){
			if( (j > ( (TOTAL_COLUNAS-1) - i ) ) && ( j < i ) ) 
			totalResultado += M[i][j];
		       }
		totalResultado /= 30;
	}

	printf("%.1lf\n", totalResultado);



	return 0;
}
	
