#include <stdio.h>

void ifCharacterIsAlphabet(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("Alphabet");
    }
    else{
        printf("Not an Alphabet");
    }
}


int main() {
    char alphabet;
    scanf("%c", &alphabet);

    ifCharacterIsAlphabet(alphabet);
    
	return 0;
}