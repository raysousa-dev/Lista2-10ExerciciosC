#include <stdio.h>

int main() {

    int a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    printf("Visualize aqui os numeros de forma decrescente:\n");

    if(a >= b && a >= c){
        if(c >= b){
            printf("%d, %d, %d", a, c, b);
        }else{
            printf("%d, %d, %d", a, b, c);
        }
    }
    
    else if(b >= a && b >= c){
        if(a >= c){
            printf("%d, %d, %d", b, a, c);
        }else{
            printf("%d, %d, %d", b, c, a);
        }
    }else{
        if(b >= a){
            printf("%d, %d, %d", c, b, a);
        }else{
            printf("%d, %d, %d", c, a, b);
        }
    }

system("pause");
    
return 0;

}