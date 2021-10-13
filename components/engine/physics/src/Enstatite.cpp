#include "Enstatite.h"

namespace ctm
{
    double Mineral::get_mass() {
        return _mass;
    }
    double Mineral::get_toughness() {
        return _toughness;
    }
    double Mineral::get_density() {
        return _density;
    }
    Enstatite::Enstatite(){
        _name = "Enstatite";
        _density = 3300; // kg/m^3
        _mass = 1; //kg
        _toughness = 5.5; //Mohs scale

    }
    void Enstatite::PrintMineral() {
        std::cout << "Name : " <<  _name << "\n";
        std::cout << "Density : " <<  _density <<"\n";
        std::cout << "Toughness : " << _toughness <<"\n";
    }
}