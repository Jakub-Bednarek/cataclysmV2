//
// Created by Marcin on 2021-09-23.
//

#include "Material.h"
#include "iostream"

namespace ctm {
	std::string Material::get_name() {
		return m_name;
	}

	double Material::get_density() {
		return m_density;
	}

	void Material::print() {
		std::cout<<"Material name: "<<m_name<<std::endl;
		std::cout<<"Material density: "<<m_density<<std::endl;
	}
}