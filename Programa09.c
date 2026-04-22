#include <stdio.h>

int main() {
    float tMB, vMbps, tSegundos, tMinutos;

    printf("Tamanho do arquivo (MB): ");
    scanf("%f", &tMB);
    printf("Velocidade da Internet (Mbps): ");
    scanf("%f", &vMbps);

    tSegundos = (tMB * 8) / vMbps;
    tMinutos = tSegundos / 60;

    printf("O download levara aproximadamente %.2f minutos.\n", tMinutos);

    system("pause");

    return 0;
}