#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int s, t, c = 0;
    
    srand(time(NULL));
    s = rand() % 101;

    printf("Pense em um numero entre 0 e 100. Tente adivinhar o numero secreto!\n");

    do {
        printf("Qual o seu palpite? ");
        scanf("%d", &t);
        c++;

        if (t < s) {
            printf("Muito baixo! O segredo e MAIOR.\n");
        } else if (t > s) {
            printf("Muito alto! O segredo e MENOR.\n");
        }
    } while (t != s);

    printf("Parabens! Voce acertou em %d tentativas.\n", c);

    system("pause");
    
    return 0;
}