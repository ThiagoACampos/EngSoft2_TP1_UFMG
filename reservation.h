#include "place.h"
#include <string>
#include <time.h>
#include <vector>

#ifndef RESERVATION_H
#define RESERVATION_H

#define UNIQUE_RESERVATION  1
#define DAILY_RESERVATION   2
#define WEEKLY_RESERVATION  3
#define MONTHLY_RESERVATION 4

using namespace std;

class Reservation {
    public:
        Reservation();
        Reservation(Place place, int type, time_t startsAt, time_t endsAt);
        Place getPlace();
        bool isOccupied(time_t datetime);

    private:
        Place place;
        time_t startsAt;
        time_t endsAt;
        int type;
};


// Comunicacao com o usuario
Place choosePlace(vector<Place> places);

int chooseType();

time_t chooseDate(string question);

#endif