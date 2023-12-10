#include <stdio.h>

int main() {
    int horas;
    scanf("%d",&horas);
    int km;

    scanf("%d",&km);

    double qtd = (horas * km)/12.0;

    printf("%.3f\n",qtd);

    return 0;
}