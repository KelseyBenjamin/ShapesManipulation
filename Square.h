#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"

class Square : public Shape
{
public:
	Square();
	~Square();
	float getValLen();
	void setValLen(float l);
	float area();
protected:
	float length;
};

#endif SQUARE_H
