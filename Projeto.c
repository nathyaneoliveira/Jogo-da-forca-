#include <stdio.h>
#include <string.h>

void forca(int estado){
    if(estado == 0){
        printf("\n--------------");
        printf("\n|            |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }else if(estado == 1){
        printf("\n--------------");
        printf("\n|            |");
        printf("\n|            0");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }else if(estado == 2){
        printf("\n--------------");
        printf("\n|            |");
        printf("\n|            0");
        printf("\n|            |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }else if(estado == 3){
         printf("\n--------------");
        printf("\n|             |");
        printf("\n|             0");
        printf("\n|            -|");
        printf("\n|              ");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }else if(estado == 4){
         printf("\n--------------");
        printf("\n|             |");
        printf("\n|             0");
        printf("\n|            -|-");
        printf("\n|              ");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }else if(estado == 5){
         printf("\n--------------");
        printf("\n|             |");
        printf("\n|             0");
        printf("\n|            -|- ");
        printf("\n|            /  ");
        printf("\n|              ");
        printf("\n|");
        printf("\n-");
    }else if(estado == 6){
         printf("\n--------------");
        printf("\n|             |");
        printf("\n|             0");
        printf("\n|            -|-");
        printf("\n|            / \\ ");
        printf("\n|  PERDEU O GAME, TENTE NOVAMENTE!!");
        printf("\n|               ");
        printf("\n-");
    }
}

int main()
{
    char p_sec[100];//palavra secreta
    printf("Jogador 1: \n");
    printf("Informe a palavra secreta: \n");
    fgets(p_sec, 100, stdin);
    printf("A palavra secreta é: %s", p_sec);
    printf("A palavra tem %lu caracteres", strlen(p_sec)-1);
    for(int i=0;i < 30;i++){
        printf("\n");
    }
    
    p_sec[strlen(p_sec)-1] ='\0';
    
    char p_tela[100];//palavra para tela
    strcpy(p_tela, p_sec); //copia de p_sec
    for(int i=0; i<strlen(p_tela); i++){
        p_tela[i]= '_';
    }
    
    
    int erros = 0;
    while(1){
    
    //imprimir a forca 
        forca(erros);
    //imprimir os underline '_' para cada letra da palavra secreta
        printf("Adivinhe: ");
        for(int i = 0; i<strlen(p_tela); i++){
            printf("%c ", p_tela[i]);
        }
    //recebe a letra
        printf("\nLetra: ");
        char letra;
        scanf(" %c", &letra);
    //se letra correta atualiza palavra na tela
        int sera_que_errou = 1; //1=sim 0=não
        for(int i=0; i<strlen(p_tela); i++){
            if(letra == p_sec[i]){//certa
                p_tela[i]=letra;
                sera_que_errou = 0;
            }
        }
    //se nao, incrementa erros
        if(sera_que_errou == 1){
            erros++;
        }
    //verifica se o jogo acabou
    //verifica se ganhou
    //verifica se p_sec é igual a p_tela
    if(strcmp(p_tela, p_sec)==0){
        //ENTÃO ganhou
        printf("\nVENCEU! PARABÉNS!!");
        printf("\nYOU WIN!");
        break;
    }
    
    //verifica se perdeu
        if(erros == 6){
            //Perdeu
            forca(erros);
            break;
        }
    }

    
    
    
    return 0;
}