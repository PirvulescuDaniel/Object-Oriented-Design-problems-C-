#include "Calculator.h"

double Calculator::computeTotalArea(LandOwner* _owner) {

	double totalArea = 0;

	for (auto& l : _owner->getLands()) {
		totalArea += l->computeArea();
	}

	return totalArea;
}