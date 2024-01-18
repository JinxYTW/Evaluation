#include "horaire.h"
#include <assert.h>
#include <string>

namespace horaire{

    Horaire::Horaire(int h, int m):_h(h),_m(m)
    {
        bool status = isHour(h,m);
        
        if (status==false){
            _h=-1;
            _m=-1;
        }
    }

    int Horaire::getH() const
    {
        return _h;
    }

    int Horaire::getM() const
    {
        return _m;
    }

    void Horaire::setH(int h)
    {
        if ((h>0)||(h<23)){
            _h = h;
            }
        
        
    }

    void Horaire::setM(int m)
    {
        if ((m>0)||(m<59)){
            _m = m;
            }
        
    }

   

    void Horaire::updateHour(int h, int m)
    {
        bool status = isHour(h,m);
        assert(status && "Heure non valide");

        setH(h);
        setM(m);
    }

    void Horaire::addTime(int h, int m)
    {
        _m += m;

        if (getM()>59){
            int newm = getM()-59;

            setM(newm);
            setH(getH()+1);

        }

        _h += h;

        if (getH()>23){
            int newh = getH()-23;

            setH(newh-23);

        }


    }
    bool isHour(int h, int m)
    {
        if ((h < 0) || (h>23)) return false;
        if ((m <0) || (m>59)) return false;
        return true;
    }
    std::string toString(Horaire heure)
    {
       return std::to_string(heure.getH()) + "h" + std::to_string(heure.getM()) ; 
    }
    
}