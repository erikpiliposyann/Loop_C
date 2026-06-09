#include <stdio.h>

int main(){
	int num;
	printf("Input number:");
	scanf("%i", &num);
	
	int orig_num = num;
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
	if(orig_num == rev){
		printf("Number is palindrom.");
	}
	else{
		printf("Number is not palindrom.");
	}
	return 0;
}
