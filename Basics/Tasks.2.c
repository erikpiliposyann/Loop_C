#include <stdio.h>

int main(){
	int n = 0;
	printf("Input number:");
	scanf("%i", &n);
	int sum = 0;
	for(int i = 1; i <= n; ++i){
		sum += i;
	}

	printf("Sum of elements: %i", sum);
	return 0;
}
