#include<stdio.h>

int main(){
    int dia, diaFim;
    int hora, horaFim;
    int minuto, minutoFim;
    int segundo, segundoFim;

    scanf("Dia %d", &dia);
    scanf("%d : %d : %d\n", &hora, &minuto, &segundo);
    scanf("Dia %d", &diaFim);
    scanf("%d : %d : %d", &horaFim, &minutoFim, &segundoFim);

    segundo = segundoFim - segundo;
    minuto = minutoFim - minuto;
    hora = horaFim - hora;
    dia = diaFim - dia;

    if (segundo < 0){
        segundo += 60;
        minuto -= 1;
    }

    if (minuto < 0){
        minuto += 60;
        hora-= 1;
    }

    if (hora < 0){
        hora += 24;
        dia-= 1;
    }

    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", hora);
    printf("%d minuto(s)\n", minuto);
    printf("%d segundo(s)\n", segundo);
}