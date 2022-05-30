#include <stdio.h>
#include <iostream>
#include <vector>
#include "place.h"
#include "reservation.h"
#include <locale.h>


void printMainMenu() {
    printf("\n");
    printf("/=======================\\\n");
    printf("| 1. Adicionar Espaço   |\n");
    printf("| 2. Adicionar Reserva  |\n");
    printf("| 3. Listar Reservas    |\n");
    printf("| 4. Listar Espaços     |\n");
    printf("| 5. Sair               |\n");
    printf("\\=======================/\n");

    printf("Opção selecionada: ");
}

void printPlaces(vector<Place> systemPlaces){

    for (auto i = systemPlaces.begin(); i != systemPlaces.end(); ++i){
        Place currentPlace = *i;
        cout << "-----------------------\n";
        cout << "Nome: " << currentPlace.getName() << "\n";
        cout << "Tipo: " << currentPlace.getType() << "\n";
        cout << "Capacidade: " << currentPlace.getCapacity() << "\n";
    }

}

Place AddAndReturnPlace (){
    int daysToInput;
    int userInput;
    string placeName;
    Place placeToAdd;

    cin.ignore();
    cout<< "- Insira o nome do espaço a ser inserido: ";
    getline(cin,placeName);

    placeToAdd.setName(placeName);

    cout << "- Insira o número de dias que o espaço estará disponível para reservas: ";
    cin>>daysToInput;

    cout << "- Insira os dias que o espaço estará disponível para reservas seguindo o formato abaixo \n";
    cout << "1 - Domingo, 2 - Segunda, 3 - Terça, 4 - Quarta...\n";
    cout << "Informar somente os números. Ex: 1 2 3\n";

    for(int i = 0; i < daysToInput; i++){
        cin>>userInput;
        placeToAdd.setDayInWeekAvailableDays(userInput);
    }

    return placeToAdd;
}


int main() {

    vector<Place> systemPlaces;
    int menu = 0;
    Place placeReturned;

    setlocale(LC_ALL, "pt_BR");
    
    while(menu != 5) {
        
        printMainMenu();
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                placeReturned = AddAndReturnPlace();
                if(placeReturned.getName().empty() == false)
                    systemPlaces.push_back(placeReturned);
                break;
            case 2:
                // To Do          
                break;
            case 3:
                // To Do
                break;
            case 4:
                printPlaces(systemPlaces);
                break;
            default:
                break;
        }
    
    }

    return 0;
}