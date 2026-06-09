#include <stdio.h>

int main(){
	int num;
	printf("Input number:");
	scanf("%i", &num);

	int n = 1;
	for(int i = 1; i <= num; ++i){
		for(int j = 1; j <= i; ++j){
			printf("%i ", n);
			n++;
		}
		printf("\n");
	}
	return 0;
}
