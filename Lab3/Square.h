#pragma once

class Square
{
public:
	Square(double = 1, double = 0, double = 0);

	double getBottomLeftX() const;
	double getBottomLeftY() const;
	double getSideLength() const;

	void setBottomLeftX(double x);
	void setBottomLeftY(double y);
	void setSideLenth(double length);

	void print();

	double getArea();
	bool isPointInside(double x, double y);


private:
	double bottomLeftX;
	double bottomLeftY;
	double sideLength; //in cm
};

