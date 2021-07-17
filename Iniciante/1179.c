#include <stdio.h>

int main() {

	int variavel;
	int par[5];
	int impar[5];
	int i;
	int j;

	int pr = 0;
       	int imp = 0;

	for(i = 0; i < 15; i++) {
		scanf("%d", &variavel);
		
		if( variavel%2 == 0 ){
			par[pr] = variavel;
			if( pr == 4 ) {
			
			for(j=0; j<5 ; j++) printf("par[%d] = %d\n", j, par[j]);		
			
			pr = 0;	
			}
			else pr++;
		}
		else{
			impar[imp] = variavel;
			if ( imp == 4 ) {
			 	
				for(j=0; j<5 ; j++) printf("impar[%d] = %d\n", j, impar[j]);      
			
				imp = 0;
			}
			else imp++;
		}
	}

	for(i=0; i < imp; i++){
		printf("impar[%d] = %d\n", i, impar[i]);
	}

	for(i=0; i < pr; i++){
		printf("par[%d] = %d\n", i, par[i]);
	}


	return 0;
}

