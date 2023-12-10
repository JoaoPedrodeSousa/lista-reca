#include <stdio.h>

int main() {
    int qtd, termo;
    scanf("%d",&qtd);
    
    int var[qtd];

    for(int i=0;i<qtd;i++){
        scanf("%d",&termo);
        
        if(termo % 2 == 0){
            var[i] = 0;
        }
        else{
            var[i] = 1;
        }
    }
    for(int i=0;i<qtd;i++){
        printf("%d\n",var[i]);
    }

    return 0;
}