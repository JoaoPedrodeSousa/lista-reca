#include <stdio.h>

int main() {
    int golInter, golGremio;
    int controle=1;
    int quantidadePartidas = 0;
    int vitoriaInter = 0, vitoriaGremio = 0, empate = 0;
    int resp;

    while(controle){
        scanf("%d",&golInter);
        scanf("%d",&golGremio);

        if(golInter > golGremio){
            vitoriaInter+= 1;
        } 
        else if (golGremio > golInter){
            vitoriaGremio += 1;
        } else{
            empate += 1;
        }

        quantidadePartidas += 1;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&resp);

        if(resp == 1){
            continue;
        }

        break;
    }
    
    printf("%d grenais\n",quantidadePartidas);
    printf("Inter:%d\n",vitoriaInter);
    printf("Gremio:%d\n",vitoriaGremio);
    printf("Empates:%d\n",empate);
    
    if(vitoriaGremio > vitoriaInter){
        printf("Gremio venceu mais\n");
    }
   
    else if(vitoriaInter > vitoriaGremio){
        printf("Inter venceu mais\n");
    } 
    else{
        printf("empate\n");
    }


    return 0;
}
