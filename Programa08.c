#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (ex: 1.60): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);

    system("pause");
    
    return 0;
}