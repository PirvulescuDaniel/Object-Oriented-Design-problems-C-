#include "Square.h"

Square::Square(double _side) {
	this->side = _side;
}

Square::~Square() {

}

double Square::computeArea() {
	return this->side * this->side;
}