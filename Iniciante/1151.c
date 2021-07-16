#include <stdio.h>

int main() {

	int N = 0;
	int i = 0;
	int fibo0 = 0;
	int fibo1 = 1;
	int fibo2 = 0;
	scanf("%d", &N);

	for( i = 0 ; i < N; i++)
	{
		if( (N-1) == i ) printf("%d\n", fibo2);
		else {
		printf("%d ", fibo2);
		fibo0 = fibo1;
		fibo1 = fibo2;
		fibo2 = fibo0 + fibo1;
	
		}
	}


	return 0;
}
