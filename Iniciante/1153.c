#include <stdio.h>

int main() {

	int n = 0;
	int total = 0;

	scanf("%d", &n);
	total=n;

	while( n>0 ){

		if(n!=1)
		total*=(n-1);
		n--;
	}

	printf("%d\n", total);

	return 0;
}
