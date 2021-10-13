//
// Created by Cebulka on 22.09.2021.
//

#ifndef CATACLYSM_PHYSICALOBJECT_H
#define CATACLYSM_PHYSICALOBJECT_H

#include <vector>
namespace ctm {

    class PhysicalObject {
    public:
        virtual void PrintObject() =0;
        std::vector <double> get_V();
        std::vector <double> get_A();
        std::vector <double> get_Position();
        void change_V();
        void change_Position();
        void set_V(double a_x, double a_y, double a_z);
        void set_A(double a_x, double a_y , double a_z);
        void set_Position(double a_x, double a_y, double a_z);
        double get_FX();
        double get_FY();
        double get_FZ();
        double get_EkX();
        double get_EkY();
        double get_EkZ();
    protected:
        std::vector <double> _V;
        std::vector <double> _A;
        std::vector <double> _Position;
        double _mass;

    };
};

#endif //CATACLYSM_PHYSICALOBJECT_H
