#include <stdio.h>

int main() {

	int raio1;
	int raio2;
	int entrada;

	scanf("%d", &entrada);

	while(entrada>0) {

		scanf("%d %d", &raio1, &raio2);
		printf("%d\n", (raio1+raio2));

		--entrada;
	}


	return 0;
}
