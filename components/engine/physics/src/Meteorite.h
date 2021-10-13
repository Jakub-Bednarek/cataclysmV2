//
// Created by Cebulka on 19.09.2021.
//

#ifndef CATACLYSM_METEORITE_H
#define CATACLYSM_METEORITE_H

#include <vector>
#include "Mineral.h"
#include "PhysicalObject.h"
#include "reactphysics3d/reactphysics3d.h"

namespace ctm {
class Meteorite : public PhysicalObject {
    public:
    reactphysics3d::PhysicsCommon x;

    Meteorite(std::vector<std::pair<double,Mineral*>> a_composition, double a_diameter);
        double get_mass() const;
        double get_diameter() const;
        void set_mass();
        void PrintObject();
    private:
        std::vector<std::pair<double,Mineral*>> _composition;
        double _diameter;
        bool check_composition();
    };
}

#endif //CATACLYSM_METEORITE_H
