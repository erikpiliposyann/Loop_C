#include <stdio.h>

int main(){
	int num;
	printf("Input high:");
	scanf("%i", &num);
	
	int new_num = (num * 2 - 1);
	for(int i = 1; i <= num; ++i){
		for(int j = 1; j <= new_num; ++j){
			if(i == 1 && i == num){
				printf("*");
			}
			else if(i == num && j % 2 != 0){
				printf("*");
			}
			else if(j == (num - i + 1) || j == (num + i - 1)){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}	
