#include <stdio.h>

int main(){
	int n = 0;
	printf("Input number:");
	scanf("%i", &n);
	int sum = 0;
	for(int i = 1; i <= n; ++i){
		if(i % 2 == 0){
			continue;
		}
		else{
			sum += i;
		}
	}
	printf("Sum of odd numbers:%i\n", sum);
}
