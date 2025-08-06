#include <stdio.h>

int main(){

    char estado1 [20];
    char estado2 [20];
    char codigo1 [4];
    char codigo2 [4];
    char cidade1 [10];
    char cidade2 [10];
    int populacao1;
    int populacao2;
    //float km;
    float pib1;
    float pib2;
    int turisticos1;
    int turisticos2;

    printf("Ola, seja bem vindo ao super trunfo. Por gentileza, Digite o nome do primeiro estado que voce quer:");
    scanf("%20s", estado1);
    printf("Agora do segundo:");
    scanf("%20s", estado2);
    printf("Agora me diga um codigo para a carta contendo a letra inicial do primeiro estado escolhido, e depois um numero de 0 a 4\n");
    scanf("%3s", codigo1);
    printf("Usando a mesma regra, escolha o segundo codigo.\n");
    scanf("%3s", codigo2);
    printf("Agora, escolha uma cidade detro do primeiro estado que vc escolheu anteriormente:\n");
    scanf("%10s", cidade1);
    printf("Agora do segundo estado:\n");
    scanf("%10s", cidade2);
    printf("Agora digite a populacao da primeira cidade em numeros exatos:\n");
    scanf("%d", &populacao1);
    printf("Agora digite a populacao da segunda cidade em numeros exatos:\n");
    scanf("%d", &populacao2);
    printf("Ponha o numero do PIB do primeiro estado:\n");
    scanf("%f", &pib1);
    printf("Agora ponha o numero do PIB do segundo estado:\n");
    scanf("%f", &pib2);
    printf("Ótimo. Agora a quantidade de pontos turisticos do primeiro estado:\n");
    scanf("%d", &turisticos1);
    printf("Agora a quantidade de pontos turisticos do segundo estado:\n");
    scanf("%d", &turisticos2);
    printf("Ok. Aqui vao os detalhes das suas duas carta:\n");
    printf("Estado: %20s\n, Codigo: %s\n Cidade: %10s\n Populacao:%d\n Pib:%.2f\n Pontos turisticos: %d\n\n\n\n\n",estado1, codigo1, cidade1, populacao1, pib1, turisticos1 );
    printf("Estado: %20s\n, Codigo: %s\n Cidade: %10s\n Populacao:%d\n Pib:%.2f\n Pontos turisticos: %d\n\n\n\n\n",estado2, codigo2, cidade2, populacao2, pib2, turisticos2 );
    

    return 0;
}


