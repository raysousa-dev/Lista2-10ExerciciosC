#include <stdio.h>

int main() {
    int a, b, max;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite outro numero: ");
    scanf("%d", &b);

    if(a>b){
        max = a;
    }else{
        max = b;
    }

    while(1){
        if(max % a == 0 && max % b == 0){
            printf("O MMC é: %d\n", max);
            break;
        }
        max++;
    }

system("pause");

return 0;

}