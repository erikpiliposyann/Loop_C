#include <stdio.h>

int main(){
	int num;
	printf("Input number:");
	scanf("%i", &num);

	int rev = 0;
	int digit = 0;
	if(num < 0){
		num = -num;
	}
	while(num){
		digit = num % 10;
		rev = rev * 10 + digit;
		num = num / 10;
	}

	while(rev){
		digit = rev % 10;
		printf("%i,", digit);
		rev = rev / 10;
	}



	return 0;
}
