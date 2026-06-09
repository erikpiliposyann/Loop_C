#include <stdio.h>

int main(){
	int num_1;
	int num_2;

	printf("Input first number:");
	scanf("%i", &num_1);
	printf("Input second number:");
	scanf("%i", &num_2);
    int res = 0;	
	for(int i = 0; i < num_2; ++i){
		res += num_1;
	}
	printf("%i", res);
}

