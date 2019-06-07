#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <iostream>
using namespace std;


class Shape
{
public:
	Shape();
	~Shape();
	void setColor(string aColor);
	string returnColor();

protected:
	string color;
};
#endif SHAPE_H