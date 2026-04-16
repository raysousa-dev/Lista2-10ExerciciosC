#include <stdio.h>
#include <stdlib.h>

int main() {
    float fahrenheit, celsius;

    printf("Digite a temperatura em Celsius: ");
    scanf("%.2f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("\nA temperatura %.2f e %.2f em fahrenheit\n", celsius, fahrenheit);

    system("pause");

    return 0;
}