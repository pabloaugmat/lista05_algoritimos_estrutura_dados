//Bibliotecas do sistema
#include <stdio.h>
#include <stdlib.h>

//Bibliotecas do projeto
#include "pilhaEncadeada.h"



int main(){

    int opcao = 0;//Variavel de controle do looping de execução do jogo
    int i;

    Pilha *tubo1 = NULL, *tubo2 = NULL, *tubo3 = NULL;

    //laço para preencher o primeiro tubo antes de iniciar o jogo
    for(i = 4; i > 0; i--){
        empilhar(tubo1, i);
    }

    do{

        system("clear");

        printf("Tubo 1 Tubo 2 Tubo 3\n");
        printf("|%p|     | |    | |\n", tubo1);
        printf("|%p|     | |    | |\n", tubo1);
        printf("|%p|     | |    | |\n", tubo1);
        printf("|%p|     | |    | |\n", tubo1);
        printf("|%p|     | |    | |\n", tubo1);



    }while( opcao != 0);

    desempilhar(tubo1);
    desempilhar(tubo2);
    desempilhar(tubo3);

    return 0;
}