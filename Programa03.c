#include <stdio.h>

int main() {
    
    char letra;

    printf("Escreva uma letra: ");
    scanf("%c", &letra);

    if(letra == 'a' | letra == 'e' | letra == 'i' | letra == 'o' | letra == 'u'){

        printf("A letra e vogal!\n");

    }else{

        printf("A letra e consoante!\n");

    }

    system("pause");

    return 0;

}