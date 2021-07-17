#include <stdio.h>

int main() {

	int x[20];
	int i;

	for(i=0; i<20 ; i++) {
		scanf("%d",&x[19-i]);
	}
	
	for(i=0; i<20 ; i++) {
		printf("N[%d] = %d\n", i, x[i]);
	}

	return 0;
}

