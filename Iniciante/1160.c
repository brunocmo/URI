#include <stdio.h>


int main() {


	int casosTeste = 0;

	int pA;
	int pB;
	double G1;
	double G2;

	int i;
	int tempo;

	scanf("%d", &casosTeste);

	while( casosTeste != 0)
	{
		scanf("%d %d %lf %lf", &pA, &pB, &G1, &G2);

		tempo = 0;
		while( pA <= pB){
			
			pA += (int)((pA*G1)/100);
			pB += (int)((pB*G2)/100);

			//printf("%d %d\n", pA, pB);

			tempo += 1;

		}
		

		if (tempo > 100) printf("Mais de 1 seculo.\n");
		else printf("%d anos.\n", tempo);

		casosTeste--;
	}

	return 0;
}
