//
// Created by Cebulka on 22.09.2021.
//

#include "PhysicalObject.h"
namespace ctm {
    std::vector <double> PhysicalObject::get_V(){
        return _V;
    }
    std::vector <double> PhysicalObject::get_A(){
        return _A;
    }
    std::vector <double> PhysicalObject::get_Position(){
        return _Position;
    }
    void PhysicalObject::change_V() {
        _V.at(0) = _V.at(0) + _A.at(0);
        _V.at(1) = _V.at(1) + _A.at(1);
        _V.at(2) = _V.at(2) + _A.at(2);
    }

    void PhysicalObject::set_V(double a_x, double a_y, double a_z) {
        _V.at(0)= a_x;
        _V.at(1)= a_y;
        _V.at(2)= a_z;
    }

    void PhysicalObject::set_A(double a_x, double a_y, double a_z) {
        _A.at(0) = a_x;
        _A.at(1) = a_y;
        _A.at(2) = a_z;
    }

    void PhysicalObject::set_Position(double a_x, double a_y, double a_z) {
        _Position.at(0) = a_x;
        _Position.at(1) = a_y;
        _Position.at(2) = a_z;

    }

    double PhysicalObject::get_FX() {
        return _A.at(0)*_mass;
    }

    double PhysicalObject::get_FY() {
        return _A.at(1)*_mass;
    }

    double PhysicalObject::get_FZ() {
        return _A.at(2)*_mass;
    }

    double PhysicalObject::get_EkX() {
        return _V.at(0)*_V.at(0)*_mass/2;
    }

    double PhysicalObject::get_EkY() {
        return _V.at(1)*_V.at(1)*_mass/2;
    }

    double PhysicalObject::get_EkZ() {
        return _V.at(2)*_V.at(2)*_mass/2;
    }

    void PhysicalObject::change_Position() {
        _Position.at(0)= _Position.at(0)+_V.at(0);
        _Position.at(1)= _Position.at(1)+_V.at(1);
        _Position.at(2)= _Position.at(2)+_V.at(2);
    }
}