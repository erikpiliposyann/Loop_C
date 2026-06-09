#include <stdio.h>

int main(){
    int num;
    printf("Input number: ");
    scanf("%i", &num);

    if(num < 100){
        printf("True");
        return 0;
    }

    int prev = 0;
    int next = 0;
    int diff = 0;

    int isTrue = 1;

    prev = num % 10;
    num /= 10;
    next = num % 10;
    diff = next - prev;

    while(num){
        prev = next;
        num /= 10;

        if(num == 0){
            break;
        }

        next = num % 10;

        if(next - prev != diff){
            isTrue = 0;
            break;
        }
    }

    if(isTrue)
        printf("True");
    else
        printf("False");

    return 0;
}
