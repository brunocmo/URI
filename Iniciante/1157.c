#include <stdio.h>

int main(){

	int valor = 0;
	int i = 0;

	scanf("%d", &valor);

	for( i = 1 ; i <=valor ; i++){
		if( (valor%i) == 0 ) printf("%d\n", i);

	}
		
	return 0;
}
