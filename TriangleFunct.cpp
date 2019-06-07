#include "Triangle.h"

Triangle::Triangle() {};
Triangle::~Triangle() {};
float Triangle::getValBase()
{
	return base;
}
float Triangle::getValHeight()
{
	return height;
}
void Triangle::setValBase(float b)
{
	base = b;

}
void Triangle::setValHeight(float h)
{
	height = h;
}
float Triangle::area()
{
	return base * height;
}
