#ifndef BURGER_H
#define BURGER_H

#include "speler.h"
#include <string>


class Burger : public Speler
{
public:
    Burger(std::string naam):Speler(naam){}
    void actieNacht();

};

#endif // BURGER_H
