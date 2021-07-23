#include <stdio.h>

int main() {

	int valorInput;

	while( scanf("%d", &valorInput) == 1 ){

		if( valorInput > 0 ) 
			printf("vai ter duas!\n");
		else 
			printf("vai ter copa!\n");

	}

	return 0;
}
