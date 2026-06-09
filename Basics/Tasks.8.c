#include <stdio.h>

int main(){
	char  ch;
	printf("Input character: ");
    scanf(" %c", &ch);
	
	if(!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))){
		printf("False Input");
		return 0;
	}
	if(ch >= 'A' && ch <= 'B'){
		ch = ch + 32;
	}

	switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
			printf("Character is vowel.\n");
				break;
        default:
            printf("Character is consonant.\n");
	}


	return 0;
}
