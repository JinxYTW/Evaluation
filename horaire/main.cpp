#include "horaire.h"

int main(){
    //Début 1
    horaire::Horaire question1(2,69);
    std::cout << horaire::toString(question1)<< std::endl;

    //Debut 2
    horaire::Horaire question2(5,23);
    std::cout << horaire::toString(question2)<<std::endl;

    //Debut 3
    question2.updateHour(7,56);
    std::cout << horaire::toString(question2)<<std::endl;

    //Debut 4
    question2.addTime(1,23);
    std::cout << horaire::toString(question2)<<std::endl;

    //Debut 5
    question2.addTime(14,41);
    std::cout << horaire::toString(question2)<<std::endl;










}