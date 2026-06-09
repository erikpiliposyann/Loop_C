#include <stdio.h>

int main(){
	int n;
	int sum = 0;
	while(1){
		scanf("%i", &n);
		if(n > 0){
			sum += n;
		}
		else if(n == 0){
			printf("%i", sum);
			break;
		}
		else{
			continue;
		}
	}
}
