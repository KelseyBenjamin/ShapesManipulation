#include "Square.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

int main()
{
	int choice;
	float holderA,holderB; //holdes value until assigned in class
	//Choose shape
	cout << "Choose for below" << endl;
	cout << "1. Square" << endl;
	cout << "2. Rectangle" << endl;
	cout << "3. Triangle" << endl;
	cout << "4. Circle" << endl;
	//read in choice
	cin >> choice;
	//if statement
	if (choice == 1)
	{
	//create object
		Square s;
		cout << "enter length" << endl;
		cin >> holderA;//temp...holds length for now
		s.setValLen(holderA);
		cout << "The area is: " << s.area() << endl;
	}
	else if (choice == 2)
	{
		//create object
		Rectangle r;
		cout << "enter length and width" << endl;
		cin >> holderA>>holderB;//temp...holds length and width for now
		r.setValLen(holderA);
		r.setValWid(holderB);
		cout << "The area is: " << r.area() << endl;
	}
	else if (choice == 3)
	{
		//create object
		Triangle t;
		cout << "enter base andheight" << endl;
		cin >> holderA >> holderB;//temp...holds length and width for now
		t.setValBase(holderA);
		t.setValHeight(holderB);
		cout << "The area is: " << t.area() << endl;
	}
	else if (choice == 4)
	{
		//create object
		Circle c;
		cout << "enter radius" << endl;
		cin >> holderA;//temp...holds length and width for now
		c.setValRadius(holderA);
		cout << "The area is: " << c.area() << endl;
	}
	else
	{
		cout << "Incorrect choice" << endl;
		return 0;
	}
	system("pause");
	return 0;
}
