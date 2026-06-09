#include <stdio.h>

int main(){
	int secret = 17;
	int num;

	printf("Input number:");
	while(1){
		scanf("%i", &num);
		if(num == secret){
			break;
		}
		else if(num > secret){
			printf("More low.");
		}
		else{
			printf("More high.");
		}
	}
	printf("Correct answer!!\n");
	return 0;
}
