#include <stdio.h>
#include "player.h"

//Funcion para el menu del juego
int menu(){
    int option;
    printf("Bienvenido al juego del laberinto!\n");
    printf("1. Jugar\n");
    printf("2. Creditos\n");
    printf("3. Salir\n");
    scanf("%d", &option);
    return option;
}

int juegoNuevo(){
    int win = 0;
    initPlayer();
    char movement;    
    printMazePlayer();
    do
    {
        printf("Ingrese su movimiento: ");
        scanf(" %c", &movement);
        win = playerMovement(movement);    
        printMazePlayer();    
        printNumMovimientos();
        if(win){
            printf("Felicidades, has ganado!\n");
            checkNumMovimientos();
        }
    } while (!win);
    
}

int main(void)
{
    int option;
    do
    {
        option = menu();
        switch (option)
        {
            case 1:
            printf("Bienvenido al Laberinto\n");
            juegoNuevo();
            break;
            case 2:
            printf("Créditos\n");
            printf("Realizado por: \n");
            printf("Nicolás Rojas\n");
            break;
            case 3:
            printf("Salir\n");
            break;
            default:
            printf("Opcion invalida\n");
        } 
    } while (option != 3);
        
    return 0;
}