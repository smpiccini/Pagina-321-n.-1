#include <stdio.h>
#include <stdlib.h>

const int righe=10;
const int colonne=5;

int main(int argc, char** argv) {
    int matrice[righe][colonne];
    int scambio[colonne];
    int i=0;
    int y =0;
    int x =0;
    
    for (y=0; y<righe; y++) {
        for (x=0; x<colonne; x++) {
            matrice[y][x]=i;  
            i++;
        }   
    }
    
    printf("Matrice prima dello scambio: \n");
    
    for (y=0; y<righe; y++) {
        for (x=0; x<colonne; x++) {
            printf("%d ", matrice[y][x]);
            i++;
        }
        printf("\n");
    }
    
    printf("\n");
    
    for (y=0; y<righe; y++) {
        for (x=0; x<colonne; x++) {
            scambio[x]=matrice[y][x];
        }
        y++;
        for (x=0; x<colonne; x++) {
            matrice [y-1][x]=matrice[y][x];
        }
        for (x=0; x<colonne; x++) {
            matrice [y][x]=scambio[x];
        }
    }
    
    printf("Matrice dopo lo scambio: \n");
    
    for (y=0; y<righe; y++) {
        for (x=0; x<colonne; x++) {
            printf("%d ", matrice[y][x]);
            i++;
        }
        printf("\n");
    }
    
    return (EXIT_SUCCESS);
}

