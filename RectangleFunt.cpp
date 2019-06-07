#include "Rectangle.h"

Rectangle::Rectangle()
{};
Rectangle::~Rectangle()
{};
float Rectangle::getValLen()
{
	return length;
}
float Rectangle::getValWid()
{
	return width;
}
void Rectangle::setValLen(float l)
{
	length = l;

}
void Rectangle::setValWid(float w)
{
	width = w;
}
float Rectangle::area()
{
	return length * width;
}
