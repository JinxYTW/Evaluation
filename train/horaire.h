#ifndef HORAIRE_H
#define HORAIRE_H

#include<iostream>

namespace horaire {

    class Horaire{

        public:
        Horaire(int h,int m );

        int getH()const;
        int getM()const;

        void setH(int h);
        void setM(int m);

        

        void updateHour(int h,int m);

        void addTime(int h,int m);

        
        



        private:

        int _h;
        int _m;
    };

    bool isHour(int h,int m);
    std::string toString(Horaire heure);
    










}











#endif HORAIRE_H