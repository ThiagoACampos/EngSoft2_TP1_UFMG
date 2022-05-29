#include <stdio.h>
#include "place.h"
#include "reservation.h"


void printMainMenu() {
    printf("\n");
    printf("/=======================\\\n");
    printf("| 1. Adicionar Espaço   |\n");
    printf("| 2. Adicionar Reserva  |\n");
    printf("| 3. Listar Reservas    |\n");
    printf("| 4. Sair               |\n");
    printf("\\=======================/\n");

    printf("Opção selecionada: ");
}


int main() {

    int menu = 0;

    while(menu != 4) {

        printMainMenu();
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                // To Do
                break;
            case 2:
                // To Do          
                break;
            case 3:
                // To Do
                break;
            default:
                break;
        }
    
    }

    return 0;
}