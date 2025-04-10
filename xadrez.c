#include <stdio.h>

// Desafio de Xadrez - MateCheck

void bispo(int direcao, int casas);
void cavalo(int direcao);
void rainha(int direcao, int casas);
void torre(int direcao, int casas);


int main() {
    // Nível Novato - Movimentação das Peças
    printf("\n\n--- MateCheck ---\n");

    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int m_peao, m_torre, m_bispo, m_cavalo, m_rainha, m_rei;
    int peca, casas, direcao, jogadas = 0; 

    int continuar = 1;
    do {
        if(jogadas >= 1){
            printf("Deseja continuar jogando?\n1. Sim\n2. Nao\n>> ");
            scanf("%d", &continuar);
            if(continuar != 1){
                continuar = 0;
                continue;
            }
        }
        jogadas = 1;
        printf("Qual peca deseja mover?\n1. Bispo\n2. Torre\n3. Rainha\n4. Cavalo\n>> ");
        scanf("%d", &peca);
        printf("\n");
    
        // Implementação de Movimentação do Bispo
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
        switch(peca){
            case 1:
                // Pedindo a direção e o número de casas que o usuário deseja mover a peça
                printf("\nPara qual direcao deseja mover a Bispo?\n1. Esquerda Ascendente \n2. Direita Ascendente\n3. Esquerda Descendente\n4. Direita Descendente\n>> ");
                scanf("%d", &direcao);
                printf("Quantas casas deseja mover o Bispo? (Max. 5)\n>> ");
                scanf("%d", &casas);
                printf("\n");

                if(casas <= 5)
                    bispo(direcao, casas);
                else
                    bispo(direcao, 1);
                break;
            
        // Implementação de Movimentação da Torre
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
            case 2:
                // Pedindo a direção e o número de casas que o usuário deseja mover a peça
                printf("\nPara qual direcao deseja mover a Torre?\n1. Esquerda\n2. Direita\n3. Cima\n4. Baixo\n>> ");
                scanf("%d", &direcao);
                printf("Quantas casas deseja mover a Torre? (Max. 5)\n>> ");
                scanf("%d", &casas);
                printf("\n");

                if(casas <= 5)
                    torre(direcao, casas);
                else
                    torre(direcao, 1);
                break;

        // Implementação de Movimentação da Rainha
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
            case 3:
                // Pedindo a direção e o número de casas que o usuário deseja mover a peça
                printf("\nPara qual direcao deseja mover a Rainha?\n1. Esquerda\n2. Direita\n3. Cima\n4. Baixo\n5. Esquerda Ascendente\n6. Direita Ascendente\n7. Esquerda Descendente\n8. Direita Descendente\n>> ");
                scanf("%d", &direcao);
                printf("Quantas casas deseja mover a Rainha? (Max. 8)\n>> ");
                scanf("%d", &casas);
                printf("\n");

                if(casas <= 8)
                    rainha(direcao, casas);
                else
                    rainha(direcao, 1);
                break;
        
        // Nível Aventureiro - Movimentação do Cavalo
        // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
        // Um loop pode representar a movimentação horizontal e outro vertical.]
            case 4:
                // Pedindo a direção e o número de casas que o usuário deseja mover a peça
                printf("Para qual direcao deseja mover o Cavalo?\n1. Esquerda Ascendente\n2. Direita Ascendente\n3. Esquerda Descendente\n4. Direita Descendente\n>> ");
                scanf("%d", &direcao);
                printf("\n");
                cavalo(direcao);
            default:
                break;
        }
        // Nível Mestre - Funções Recursivas e Loops Aninhados
        // Sugestão: Substitua as movimentações das peças por funções recursivas.
        // Exemplo: Crie uma função recursiva para o movimento do Bispo.

        // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
        // Inclua o uso de continue e break dentro dos loops.
    } while (continuar == 1);
    return 0;
}

// Responsável pelo movimento da torre
void bispo(int direcao, int casas){
    if(casas > 0){
        bispo(direcao, casas-1);
        switch (direcao){
            case 1:
                printf("Cima\n");
                printf("Esquerda\n\n");
                break;
            case 2:
                printf("Cima\n");
                printf("Direita\n\n");
                break;
            case 3:
                printf("Baixo\n");
                printf("Esquerda\n\n");
                break;
            case 4:
                printf("Baixo\n");
                printf("Direita\n\n");
                break;
            default:
                printf("Cima\n");
                printf("Esquerda\n\n");
                break;
        }
    }
}

// Responsável pelo movimento do cavalo
void cavalo(int direcao){
    int mov_com = 1;
    while(mov_com--){
        switch(direcao){
            case 1:
                for(int movimento = 0; movimento < 2; movimento++){
                    printf("Cima\n");
                }
                printf("Esquerda\n\n");
                break;
            case 2:
                for(int movimento = 0; movimento < 2; movimento++){
                    printf("Cima\n");
                }
                printf("Direita\n\n");
                break;
            case 3:
                for(int movimento = 0; movimento < 2; movimento++){
                    printf("Baixo\n");
                }
                printf("Esquerda\n\n");
                break;
            case 4:
                for(int movimento = 0; movimento < 2; movimento++){
                    printf("Baixo\n");
                }
                printf("Direita\n\n");
                break;
            default:
                for(int movimento = 0; movimento < 2; movimento++){
                    printf("Cima\n");
                }
                printf("Esquerda\n\n");
                break;
        }
    }
}

// Responsável pelo movimento da rainha
void rainha(int direcao, int casas){
    if(casas > 0){
        rainha(direcao, casas-1);
        switch(direcao){
            case 1:
                printf("Esquerda\n\n");
                break;
            case 2:
                printf("Direita\n\n");
                break;
            case 3:
                printf("Cima\n\n");
                break;
            case 4:
                printf("Baixo\n\n");
                break;
            case 5:
                printf("Cima\n");
                printf("Esquerda\n\n");
                break;
            case 6:
                printf("Cima\n");
                printf("Direita\n\n");
                break;
            case 7:
                printf("Baixo\n");
                printf("Esquerda\n\n");
                break;
            case 8:
                printf("Baixo\n");
                printf("Direita\n\n");
                break;
            default:
                printf("Esquerda\n\n");
                break;
        }
    }
}

// Responsável pelo movimento da torre
void torre(int direcao, int casas){
    if(casas > 0){
        torre(direcao, casas-1);
        switch(direcao){
            case 1:
                printf("Esquerda\n\n");
                break;
            case 2:
                printf("Direita\n\n");
                break;
            case 3:
                printf("Cima\n\n");
                break;
            case 4:
                printf("Baixo\n\n");
                break;
            default:
                printf("Esquerda\n\n");
                break;
        }
    }
}
