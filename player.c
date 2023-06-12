#include "maze.h"
#include <stdio.h>

//Posicion inicial del jugador
int x;
int y;
int numMovimientos; //Movimientos del jugador

//Inicializar jugador
void initPlayer(){
    x = 0;
    y = 0;
    numMovimientos = 0;
}

int checkWin(int x, int y){
    if(x == 4 && y == 4){        
        return 1;
    }
    else{
        return 0;
    }
}

int playerMovement(char movement){
    
    switch (movement)
    {
        case 'w':
        if(checkValidMovement(x, y - 1)){
            numMovimientos++;
            y--;
        }
        break;
        case 's':
        if(checkValidMovement(x, y + 1)){
            numMovimientos++;
            y++;
        }
        break;
        case 'a':
        if(checkValidMovement(x - 1, y)){
            numMovimientos++;
            x--;
        }
        break;
        case 'd':
        if(checkValidMovement(x + 1, y)){
            numMovimientos++;
            x++;
        }
        default:
            printf("Movimiento invalido\n");
        break;
    }
  
    return checkWin(x, y);
}

void printMazePlayer(){
    printMaze(x, y);   
}

void printNumMovimientos(){
    printf("Movimientos: %d\n", numMovimientos);
}

void checkNumMovimientos(){
    if(numMovimientos <= 8){
        printf("Eres un pro!\n");
    }
    else if(numMovimientos <= 15){
        printf("Eres un novato!\n");
    }
    else{
        printf("Eres un noob!\n");
    }
}