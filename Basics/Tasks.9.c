#include <stdio.h>

int main(){
	int base;
	int exp;

	printf("Input base:");
	scanf("%i", &base);
	printf("Input exponent:");
	scanf("%i", &exp);
	
	int res = 1;
	for(int i = 0; i < exp; ++i){
		res = res * base;
	}
	printf("Result %i ", res);

	return 0;
}
