#include <stdio.h>

int main() {
    int qtd, dataInput, dataAtual=2015;    
    scanf("%d",&qtd);

    int vetor[qtd];

    for(int i=0;i<qtd;i++){
        scanf("%d",&dataInput);
        vetor[i] = dataAtual - dataInput;
    }

    for(int i=0;i<qtd;i++){
        if (vetor[i] <= 0){
            vetor[i] *= (-1);
            printf("%d A.C.\n",vetor[i]+1);
        } else{
            printf("%d D.C.\n",vetor[i]);
        }
    }

    return 0;
}