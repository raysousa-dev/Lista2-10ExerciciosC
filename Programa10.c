#include <stdio.h>

int main() {

    int n, i;
    int fatorial = 1; 

    printf("Digite um numero para ver o fatorial: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        fatorial = fatorial * i;
    }

    printf("%d! = %d\n", n, fatorial);

    system("pause");

    return 0;
}