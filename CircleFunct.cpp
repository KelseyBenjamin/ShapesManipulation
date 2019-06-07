#include "Circle.h"
#include <cmath>

Circle::Circle()
{};
Circle::~Circle()
{};
float Circle::getValRadius()
{
	return radius;
}

void Circle::setValRadius(float r)
{
	radius = r;

}

float Circle::area()
{
	return 3.14*pow(radius,2.0);
}