//
// Created by Cebulka on 19.09.2021.
//
#define _USE_MATH_DEFINES
#include "Meteorite.h"
#include <cmath>
namespace ctm{
    double Meteorite::get_mass() const{
        return _mass;
    }
    double Meteorite::get_diameter() const {
        return _diameter;
    }
    bool Meteorite::check_composition(){
        double size = 0.0;
        for (const auto& comp : _composition) {
            size = size+ comp.first;
        }
        return size == 100.0;
    }
    Meteorite::Meteorite(std::vector<std::pair<double, Mineral*>> a_composition, double a_diameter) {
        _composition = a_composition;
        _diameter = a_diameter;
        if(check_composition()){
            set_mass();
            std::cout <<"Meteoryt ma mase \n" << _mass;
        }
        else{
            std::cout << "Nie udalo sie poprawnie stworzyc meteorytu \n";
        }
    }
    void Meteorite::set_mass(){
        _mass =0.0;
        for(const auto& comp : _composition){
            _mass = _mass + (comp.first/100 * comp.second->get_density() * 4 *
                    M_PI * pow(_diameter/2,3))/3;
        }
    }
    void Meteorite::PrintObject() {
        std::cout <<"Meteoryt \n";
    }
}