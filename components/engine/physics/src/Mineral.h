//
// Created by Cebulka on 12.09.2021.
//
#ifndef CATACLYSM_MINERAL_H
#define CATACLYSM_MINERAL_H
#include <iostream>

namespace ctm
{
    class Mineral {
    public:
        virtual void PrintMineral() = 0;
        virtual double get_toughness();
        virtual double get_mass();
        virtual double get_density();
    protected:
        std::string _name;
        double _toughness;
        double _mass;
        double _density;
    };
};
#endif
