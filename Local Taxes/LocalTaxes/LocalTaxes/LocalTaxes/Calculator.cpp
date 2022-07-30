#include "Calculator.h"

double Calculator::computeTotalArea(LandOwner* _owner) {

	double totalArea = 0;

	for (auto& l : _owner->getLands()) {
		totalArea += l->computeArea();
	}

	return totalArea;
}

double Calculator::computeOwnerTax(LandOwner* _owner) {

	double TPSM = 0.01; // TPM = Tax Per Square Meter = 0.01 Romanian Leu

	return Calculator::computeTotalArea(_owner) * TPSM;

}