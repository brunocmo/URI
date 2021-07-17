#include <stdio.h>

int main() {

	float S = 1.00f;
	int i = 1;
	int j = 2;

	for( i=3; i<=39 ; i+=2 ){

		
		S += ( (float)(i)/(float)(j) );
		j*=2;

		//printf("%d %f\n",i ,S);

	}
	printf("%.2f\n", S);

	return 0;
}

