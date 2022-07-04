#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "LandOwner.h"
#include "Calculator.h"

using namespace std;

int main() {

	LandOwner* owner = new LandOwner("Daniel");

	Shape* land0 = new Square(4);
	Shape* land1 = new Square(5);
	Shape* land2 = new Rectangle(3, 5);

	Shape* land3 = new Square(4);
	owner->removeLand(3);

	owner->addLand(land1);
	owner->addLand(land2);
	owner->addLand(land3);

	cout << Calculator::computeTotalArea(owner);

	delete owner;

	return 0;
}