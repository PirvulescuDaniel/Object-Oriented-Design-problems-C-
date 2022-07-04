#pragma once
#include "Shape.h"
#include <string>
#include <vector>

class LandOwner {

	private:
		std::string name;
		std::vector<Shape*> lands;

	public:
		LandOwner(std::string _name);
		~LandOwner();

		void addLand(Shape *land);
		void removeLand(int index);

		std::vector<Shape*> getLands();

};