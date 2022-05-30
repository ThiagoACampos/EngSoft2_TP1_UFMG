#include "place.h"
#include <string>
#include<iostream>

using namespace std;

Place::Place(){
    startWeekAvailableDays();
}

void Place::startWeekAvailableDays(){
    for( int i = 0; i < MAX_WEEK_DAYS; i++){
        this->weekAvailableDays[i] = 0;
    }
}

void Place::setType (int type){
    this->type = type;
}

void Place::setName (string name){
    this->name = name;
}

void Place::setCapacity (int capacity){
    this->capacity = capacity;
}

void Place::setDayInWeekAvailableDays (int dayAvailable){
    this->weekAvailableDays[dayAvailable] = dayAvailable;
}

int Place::getType (){
    return this->type;
}

string Place::getName (){
    return this->name;
}

int Place::getCapacity (){
    return this->capacity;
}

int* Place::getWeekAvailableDays (){
    return this->weekAvailableDays;
}
