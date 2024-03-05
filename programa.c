#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5 //#=diretiva. #define define uma constante

int main() {
    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    int chute;

    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {

        printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual é o seu chute?\n ");
        
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Você não pode escolher número negativo.");
            i--;

            continue; //para de operar neste bloco e continua nos próximos.
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;
        int menor = chute < numerosecreto;
        
        if(acertou) {
            printf("Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");

            break; //pedir para o "for" parar
        }

            else if(maior) { //"else if(maior)" - se for verdadeiro, ele nem executa a função "(menor)"
                printf("Seu chute foi maior que o número secreto!\n");
            } 
            else { //se não for maior, só pode ser menor, por isso o "else"
                printf("Seu chute foi menor que o número secreto!\n");
            }
    }  
}