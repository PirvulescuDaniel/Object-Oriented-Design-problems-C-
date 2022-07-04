#include "LandOwner.h"

LandOwner::LandOwner(std::string _name) {
	this->name = _name;
}

LandOwner::~LandOwner() {

	for (auto& l: lands) {
		delete l;
	}

	lands.clear();

}

void LandOwner::addLand(Shape* land) {

	this->lands.push_back(land);

}

void LandOwner::removeLand(int index) {

	if (index <= lands.size()) {

		delete lands[index];
		auto it = lands.begin();
		std::advance(it, index);
		lands.erase(it);

	}

}

std::vector<Shape*> LandOwner::getLands() {
	return this->lands;
}