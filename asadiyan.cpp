#include <iostream>
using namespace std;

// Abstract class
class Shape_inside
{
protected:
	double l;
public:
	void igetData()
	{
		cin >> l;
	}

	// virtual Function
	virtual double calculateArea() = 0;
};
class shape_edge {
protected:
	double p;
public:
	void egetData() {
		cin >> p;
	}

	// virtual Function
	virtual double calculate_perimeter() = 0;
};

class Square : public Shape_inside,public shape_edge
{
public:
	double calculateArea()
	{
		return l * l;
	}
	double calculate_perimeter()
	{
		return p * 4;
	}
};

class Circle : public Shape_inside,public shape_edge
{
public:
	double calculateArea()
	{
		return 3.14 * l * l;
	}
	double calculate_perimeter()
	{
		return p * 3.14 * 2;
	}
};

int main()
{
	Square s;
	Circle c;

	cout << "Enter length to calculate the area of a square: ";
	s.igetData();
	cout << "Area of square: " << s.calculateArea();
	cout << "\nEnter radius to calculate the perimeter of a circle: ";
	c.egetData();
	cout << "perimeter of circle: " << c.calculate_perimeter();

	return 0;
}