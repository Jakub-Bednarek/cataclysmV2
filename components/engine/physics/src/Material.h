//
// Created by Marcin on 2021-09-23.
//

#ifndef CATACLYSM_MATERIAL_H
#define CATACLYSM_MATERIAL_H
#include "string"

namespace ctm {
	class Material {
		public:
			std::string get_name();
			double get_density();
			virtual void print();

		protected:
			std::string m_name;
			double m_density; //kg/m^3
	};
};


#endif //CATACLYSM_MATERIAL_H
