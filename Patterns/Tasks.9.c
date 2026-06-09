#include <stdio.h>

int  main(){
	int num;
    printf("Input number: ");
    scanf("%i", &num);

    if(num < 100){
        printf("True");
        return 0;
    }

    int prev = 0;
    int next1 = 0;
    int next2 = 0;

    int isTrue = 1;

    prev = num % 10;
    num /= 10;
    next1 = num % 10;
    num /= 10;

    while(num){
        next2 = num % 10;

        if(next1 * next1 != prev * next2){
            isTrue = 0;
			break;
        }

		prev = next1;
		next1 = next2;
		num /= 10;
    }

    if(isTrue)
        printf("True");
    else
        printf("False");
}
