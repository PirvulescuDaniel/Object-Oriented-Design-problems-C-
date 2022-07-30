#pragma once

#include "Shape.h"

class Rectangle : public Shape {

	private:
		double width;
		double height;

	public:	
		Rectangle(double _width, double _height);
		~Rectangle();

		double computeArea();

};