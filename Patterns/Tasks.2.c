#include <stdio.h>

int main(){
	int num;
	printf("Input number:");
	scanf("%i", &num);

	
	for(int i = 1; i <= num; ++i){
		for(int j = 1; j <= i; ++j){
			 printf("%d", i);
		}
		printf("\n");
	}
	return 0;
}
