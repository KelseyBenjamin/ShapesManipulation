#include "Square.h"


Square::Square() {};
Square::~Square() {};
float Square::getValLen()
{
	return length;
}
void Square::setValLen(float l)
{
	length = l;

}
float Square::area()
{
	return length * length;
}