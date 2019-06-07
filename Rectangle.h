#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include "Shape.h"


class Rectangle : public Shape 
{
public: 
	Rectangle();
	~Rectangle();
	float getValLen();
	float getValWid();
	void setValLen(float l);
	void setValWid(float w);
	float area();
protected:
	float length, width;
};
#endif RECTANGLE_H
