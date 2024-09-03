#include "Square.h"
#include <iostream>
using namespace std;

Square::Square(double length, double x, double y)
{
	bottomLeftX = x;
	bottomLeftY = y;
	sideLength = length;
}

double Square::getBottomLeftX() const
{
	return bottomLeftX;
}

double Square::getBottomLeftY() const
{
	return bottomLeftY;
}

double Square::getSideLength() const
{
	return sideLength;
}

void Square::setBottomLeftX(double x)
{
	bottomLeftX = x;
}

void Square::setBottomLeftY(double y)
{
	bottomLeftY = y;
}

void Square::setSideLenth(double length)
{
	sideLength = length;
}

void Square::print()
{
	cout << "Square at: (" << bottomLeftX << "," << bottomLeftY << ") side length: " << sideLength << endl;
}

double Square::getArea()
{
	return sideLength * sideLength;
}

bool Square::isPointInside(double x, double y)
{
	if ((x >= bottomLeftX && x <= bottomLeftX + sideLength) &&
		(y >= bottomLeftY && y <= bottomLeftY + sideLength))
	{
		return true;
	}
	return false;
}




