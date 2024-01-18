#include "train.h"

namespace train{

Train::Train(std::string name, int wagonsNumber, int travellersNumber, horaire::Horaire departureHour, int travelTime):_name(name),_wagonsNumber(wagonsNumber),_departureHour(departureHour),_travellersNumber(travellersNumber),_travelTime(travelTime){

}

std::string Train::getName()
{
    return _name;
}
int Train::getwagonsNumbers()
{
    return _wagonsNumber;
}
int Train::gettravellersNumber()
{
    return _travellersNumber;
}
horaire::Horaire Train::getdepartureHour()
{
    return _departureHour;
}
int Train::gettravelTime()
{
    return _travellersNumber;
}

void Train::settravellersNumber(int traveller)
{
    int maxcapacity=getwagonsNumbers()*50;
    if (traveller < maxcapacity){
        _travellersNumber=traveller;
    }
    else{
        std::cout << "Opération impossible" << std::endl;
    }

}
void Train::addWagon()
{
    _wagonsNumber=_wagonsNumber + 1 ;
}
void Train::removeWagon()
{
    int possibility=(getwagonsNumbers()-1)*8;
    if(gettravellersNumber()<possibility){
        _wagonsNumber = _wagonsNumber - 1;
    }

}

horaire::Horaire Train::landTime(horaire::Horaire departureTime, int travelTime)
{
    departureTime.addTime(0,10);
}

std::string toString(Train train)
{
    return std::string();
}

}
