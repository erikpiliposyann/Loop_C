#include <stdio.h>
#include <math.h>

int main(){
    int num;
    printf("Input number: ");
    scanf("%d", &num);

    if(num <= 1){
        printf("Number is not prime\n");
        return 0;
    }

    for(int i = 2; i <= sqrt(num); ++i){
        if(num % i == 0){
            printf("Number is not prime\n");
            return 0;
        }
    }

    printf("Number is prime\n");
    return 0;
}
