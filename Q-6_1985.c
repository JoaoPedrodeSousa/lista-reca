#include <stdio.h>

int main() {
    int produto, qtd;
    double total = 0;

    int qtdProd;
    scanf("%d", &qtdProd);

    for (int i = 0; i < qtdProd; i++) {
        scanf("%d",&produto);
        scanf("%d",&qtd);

        if (produto == 1001) {
            total += 1.5 * qtd;
        }
        
        else if (produto == 1002) {
            total += 2.5 * qtd;
        }
        
        else if (produto == 1003) {
            total += 3.5 * qtd;
        }
        
        else if (produto == 1004) {
            total += 4.5 * qtd;
        }
        
        else if (produto == 1005) {
            total += 5.5 * qtd;
        }
    }

    printf("%.2f\n", total);

    return 0;
}