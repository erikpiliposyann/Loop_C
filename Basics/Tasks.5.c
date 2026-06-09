#include <stdio.h>

int main(){
	int n = 0;
	printf("Input number:");
	scanf("%i", &n);

	for(int i = 0 ; i <= 10; i++){
		printf("%i * %i = %i \n", n, i, n * i);
	}

	return 0;
}
