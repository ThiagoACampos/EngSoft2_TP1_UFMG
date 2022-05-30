#include <string>

#ifndef PLACE_H
#define PLACE_H

using namespace std;

#define MAX_WEEK_DAYS 8

class Place {     
    private:             
        int type;        
        string name;
        int capacity;
        int weekAvailableDays[MAX_WEEK_DAYS];  // 1 - Domingo, 2 - Segunda, 3 - Terça...

    public:
        Place();
        void setType(int type);
        void setName(string name);
        void setCapacity(int capacity);
        void setDayInWeekAvailableDays(int dayAvailable);
        void startWeekAvailableDays();

        int getType();
        string getName();
        int getCapacity();
        int* getWeekAvailableDays();
    
};

#endif