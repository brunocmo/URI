#include <stdio.h>


int main() {

	int x = 0;
	int z = 0;
	int soma = 0;
	int total = 0;

	scanf("%d", &x);

	while (z <= x) {
		scanf("%d", &z);
	}

	soma = x;
	total = 1;

	while (soma < z) {
		x++;
		soma+=x;
		total++;
	}
		

	printf("%d\n", total);

	return 0;
}

