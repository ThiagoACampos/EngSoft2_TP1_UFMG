#include "place.h"

#ifndef RESERVATION_H
#define RESERVATION_H

class Reservation {
    public:
        Reservation(Place place);        

    private:
        Place place;
};

#endif