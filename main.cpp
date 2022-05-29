#include <stdio.h>
#include "place.h"
#include "reservation.h"

int main() {

    Place place = Place("Sala 213");

    Reservation reservation = Reservation(place);

    printf("Hello World\n");

    return 0;
}