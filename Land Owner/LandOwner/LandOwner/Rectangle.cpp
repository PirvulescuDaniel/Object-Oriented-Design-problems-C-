#include "Rectangle.h"

Rectangle::Rectangle(double _width, double _height) {

	this->width = _width;
	this->height = _height;

}

Rectangle::~Rectangle() {

}

double Rectangle::computeArea() {

	return this->width * this->height;

}