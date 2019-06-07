#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"


class Triangle : public Shape
{
public:
	Triangle();
	~Triangle();
	float getValBase();
	float getValHeight();
	void setValBase(float l);
	void setValHeight(float w);
	float area();
protected:
	float base, height;
};
#endif TRIANGLE_H