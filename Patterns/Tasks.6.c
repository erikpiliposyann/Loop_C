#include <stdio.h>

int main(){
	int num;
	printf("Input size:");
	scanf("%i", &num);

	for(int i = 1; i <= num; ++i){
		for(int j = 1; j <= num; ++j){
			if(i == 1 || i == num){
				printf("* ");
			}
			else if(j == 1 || j == num){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
