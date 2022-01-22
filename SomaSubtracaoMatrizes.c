#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declarações
    int op, i, j, operacao;

    // matrizes 2x2
    int m1[2][2], m2[2][2], m3[2][2];

    //matrizes 3x3
    int m4[3][3], m5[3][3], m6[3][3];

    do{
        printf("\nMatrizes - Escolha o tamanho para iniciarmos");
        printf("\n1- 2x2\n2- 3x3\n0- Sair");
        printf("\nInforme: ");
        scanf("%d", &op);

        switch(op){
        case 1:
            // elementos da matriz A - 2x2
            printf("\nAdicione os elementos na MATRIZ A\n");
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    printf("\nInforme: ");
                    scanf("%d", &m1[i][j]);
                }
            }

            printf("\nMatriz criada\n");
            for(i = 0; i < 2; i++){
                    for(j = 0; j < 2; j++){
                        printf("%d  ", m1[i][j]);
                    }
                printf("\n");
            }

            // elementos na matriz B
            printf("\nAdicione os elementos na MATRIZ B\n");
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    printf("\nInforme: ");
                    scanf("%d", &m2[i][j]);
                }
            }

            printf("\nMatriz criada\n");
            for(i = 0; i < 2; i++){
                    for(j = 0; j < 2; j++){
                        printf("%d  ", m2[i][j]);
                    }
                printf("\n");
            }

            printf("\nEscolha a operacao que queira realizar entre a matriz A e B");
            printf("\n1- Soma\n2- Subtracao");
            printf("\nInforme: ");
            scanf("%d", &operacao);

            if(operacao == 1){
                //soma
                for(i = 0; i < 2; i++){
                    for(j = 0; j < 2; j++){
                        m3[i][j] = m1[i][j] + m2[i][j];
                    }
                }

                printf("\nSoma da matrizA e matrizB\n");
                for(i = 0; i < 2; i++){
                    for(j = 0; j < 2; j++){
                        printf("%d  ", m3[i][j]);
                    }
                    printf("\n");
                }
            } else if(operacao == 2){
                //subtracao
                for(i = 0; i < 2; i++){
                    for(j = 0; j < 2; j++){
                        m3[i][j] = m1[i][j] - m2[i][j];
                    }
                }

                printf("\nSubtracao da matrizA e matrizB\n");
                for(i = 0; i < 2; i++){
                    for(j = 0; j < 2; j++){
                        printf("%d  ", m3[i][j]);
                    }
                    printf("\n");
                }
            } else {
                //inválida
                printf("\nOperacao invalida");
            }

            break;
        case 2:
            // elementos da matriz A - 3x3
            printf("\nAdicione os elementos na MATRIZ A\n");
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    printf("\nInforme: ");
                    scanf("%d", &m4[i][j]);
                }
            }

            printf("\nMatriz criada\n");
            for(i = 0; i < 3; i++){
                    for(j = 0; j < 3; j++){
                        printf("%d  ", m4[i][j]);
                    }
                printf("\n");
            }

            // elementos na matriz B
            printf("\nAdicione os elementos na MATRIZ B\n");
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    printf("\nInforme: ");
                    scanf("%d", &m5[i][j]);
                }
            }

            printf("\nMatriz criada\n");
            for(i = 0; i < 3; i++){
                    for(j = 0; j < 3; j++){
                        printf("%d  ", m5[i][j]);
                    }
                printf("\n");
            }

            printf("\nEscolha a operacao que queira realizar entre a matriz A e B");
            printf("\n1- Soma\n2- Subtracao");
            printf("\nInforme: ");
            scanf("%d", &operacao);

            if(operacao == 1){
                //soma
                for(i = 0; i < 3; i++){
                    for(j = 0; j < 3; j++){
                        m6[i][j] = m4[i][j] + m5[i][j];
                    }
                }

                printf("\nSoma da matrizA e matrizB\n");
                for(i = 0; i < 3; i++){
                    for(j = 0; j < 3; j++){
                        printf("%d  ", m6[i][j]);
                    }
                    printf("\n");
                }
            } else if(operacao == 2){
                //subtracao
                for(i = 0; i < 3; i++){
                    for(j = 0; j < 3; j++){
                        m6[i][j] = m4[i][j] - m5[i][j];
                    }
                }

                printf("\nSubtracao da matrizA e matrizB\n");
                for(i = 0; i < 3; i++){
                    for(j = 0; j < 3; j++){
                        printf("%d  ", m6[i][j]);
                    }
                    printf("\n");
                }
            } else {
                //inválida
                printf("\nOperacao invalida");
            }

            break;
        }

    }while(op != 0);

    return 0;
}
