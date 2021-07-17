#include <stdio.h>

int main() {

	double x = 0.0000;
	int i = 0;

	scanf("%lf", &x);

	printf("N[%d] = %.4lf\n", 0, x);

	for(i = 1; i<100 ;i++) {
	printf("N[%d] = %.4lf\n", i, x/=2);	
	}
	return  0;
}
