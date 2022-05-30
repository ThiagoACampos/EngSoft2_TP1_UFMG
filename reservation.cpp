#include "reservation.h"
#include "place.h"
#include <iostream>
#include <vector>

Reservation::Reservation() {

}

Reservation::Reservation(Place place, int type, time_t startsAt, time_t endsAt) {
    this->place = place;
    this->type = type;
    switch (type) {
        case UNIQUE_RESERVATION:
            this->startsAt = startsAt;
            this->endsAt = endsAt;
        default:
            break;
    }
}


Place choosePlace(vector<Place> places) {
    
    int selectedPlaceIndex;

    printf("\n");
    printf("/=======================\\\n");
    printf("| Escolha um espaço:\n\n");
    for (int i=0; i < places.size(); i++) {
        printf("| %d. %s\n", i + 1, "Espaco ");
    }
    printf("\\=======================/\n");
    printf("Local Escolhido: ");
    scanf("%d", &selectedPlaceIndex);

    return places.at(selectedPlaceIndex - 1);
}

int chooseType() {
    int type;
    printf("\n");
    printf("/=======================\\\n");
    printf("| Escolha um tipo       |\n");
    printf("|                       |\n");
    printf("| 1. Única              |\n");
    printf("| 2. Diária             |\n");
    printf("| 3. Semanal            |\n");
    printf("| 4. Mensal             |\n");
    printf("\\=======================/\n");
    printf("Tipo Escolhido: ");
    scanf("%d", &type);

    return type;
}

time_t chooseDate(string question) {

    string strDate;

    cout << endl << question;
    cout << endl << "Data selecionada (dd/MM/yyyy HH:mm): ";
    cin >> strDate;
    cout << endl;

    time_t t;
    time(&t);
    return t;
}