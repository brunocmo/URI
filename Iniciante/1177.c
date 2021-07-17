#include <stdio.h>

int main() {


	int i = 0;
	int x = 0;

	scanf("%d", &x);

	for(i = 0 ; i<1000 ; i++) printf("N[%d] = %d\n", i, i%x); 
	return 0;
}

