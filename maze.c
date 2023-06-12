#include <stdio.h>

//0 representa un camino abierto
//1 representa un camino cerrado
//El inicio del laberinto es maze[0][0]
//El final del laberinto es maze[4][4]
int maze[5][5] = {
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 1, 0}
};

void printMaze(int x, int y){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == y && j == x){
                printf("X ");
            }
            else{
                printf("%d ", maze[i][j]);
            }                
        }
        printf("\n");
    }
}

int checkValidMovement(int x, int y){
    if(x < 0 || x > 4 || y < 0 || y > 4 || maze[y][x] == 1){
        return 0;
    }
    return 1;
}