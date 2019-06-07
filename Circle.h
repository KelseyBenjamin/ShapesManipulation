#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"


class Circle : public Shape 
{
public:
	Circle();
	~Circle();
	float getValRadius();
	void setValRadius(float r);
	float area();
protected:
	float radius;
};
#endif CIRCLE_H

