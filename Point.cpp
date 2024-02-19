#include "Point.h"
#include <cmath>
#include <iostream>

using namespace std;

bool Point::Init(double x, double y)
{
	if (fabs(x) <= 100 && fabs(y) <= 100)
	{
		first = x;
		second = y;
		return true;
	}
	else
	{
		return false;
	}
}

void Point::Read()
{
	double x, y;
	do
	{
		cout << " x = "; cin >> x;
		cout << " y = "; cin >> y;
	} while (!Init(x, y));
}

void Point::Display() const
{
	cout << endl;
	cout << " x = " << first << endl;
	cout << " y = " << second << endl;
}

double Point::Distance()
{
	double v = sqrt(first * first + second * second);
	return v;
}

void Point::setfirst(double value) {
	first = value;
};
void Point::setsecond(double value) {
	second = value;
}