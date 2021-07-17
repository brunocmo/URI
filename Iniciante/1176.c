#include <stdio.h>

int main() {

	int N = 0;
	int i = 0;
        unsigned long long int fibo0 = 0;
        unsigned long long int fibo1 = 1;
	unsigned long long int fibo2 = 0;
	int x = 0;

	scanf("%d", &N);


	while( N!= 0){

	scanf("%d", &x); 

	fibo0 = 0;
	fibo1 = 1;
	fibo2 = 1;

	for( i = 2 ; i < x; i++)
	{
		fibo0 = fibo1;
		fibo1 = fibo2;
		fibo2 = fibo0 + fibo1;
	}


	if( x == 0 ) printf("Fib(%d) = %llu\n", x , fibo0);
	else
		if( x == 1 || x == 2) printf("Fib(%d) = %llu\n", x , fibo1);
		else  printf("Fib(%d) = %llu\n", x , fibo2);

	N--;
	}


	return 0;
}

