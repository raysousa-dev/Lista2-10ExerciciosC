#include <stdio.h>

int main() {

int a, b, c;
float media;

printf("Digite o primeiro numero: ");
scanf("%d", &a);

printf("Digite o segundo numero: ");
scanf("%d", &b);

printf("Digite o terceiro numero: ");
scanf("%d", &c);

media = (a + b + c)/3.0;

printf("A media é %.2f", media);

system("pause");

return 0;

}