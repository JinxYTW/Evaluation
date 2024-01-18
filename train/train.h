#ifndef TRAIN_H
#define TRAIN_H
#include <iostream>
#include<string>
#include "horaire.h"


namespace train{
    class Train{

        public:
        Train(std::string name="thomas",int wagonsNumber=8,int travellersNumber=0,horaire::Horaire departureHour,int travelTime);

        std::string getName();
        int getwagonsNumbers();
        int gettravellersNumber();
        horaire::Horaire getdepartureHour();
        int gettravelTime();

        
        void settravellersNumber(int traveller);
        void addWagon();
        void removeWagon();
        horaire::Horaire landTime(horaire::Horaire departureTime,int travelTime);


        private:
        std::string _name;
        int _wagonsNumber;
        int _travellersNumber;
        horaire::Horaire _departureHour;
        int _travelTime;





    };

    std::string toString(Train train);
}







#endif TRAIN_H