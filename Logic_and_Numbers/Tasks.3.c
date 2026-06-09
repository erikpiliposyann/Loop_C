#include <stdio.h>

int main(){
	int idx = 0;
	printf("Input fibonachi index:");
	scanf("%i", &idx);

	if(idx == 1){
		printf("Fibonachi naumber is 0");
		return 0;
	}
	else if(idx == 2){
		printf("Fibonachi naumber is 1");
		return 0;
	}
	
	long int number = 0;
	long int prim_num = 0;
	long int next_num = 1;
	for(int i = 3; i <= idx ; ++i){
		number = prim_num + next_num;
		prim_num = next_num;
		next_num = number;
	}
	printf("%ld", number);

	return 0;
}
