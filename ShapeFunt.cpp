#include "Shape.h"


	Shape::Shape()
	{};
	Shape::~Shape()
	{};
	void Shape::setColor(string aColor)
	{
		color = aColor;
	}
	string Shape::returnColor()
	{
		return color;
	}
