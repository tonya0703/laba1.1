#pragma once
class Point
{
private:
	double first;
	double second;
public:
	bool Init(double, double);
	void Read();
	void Display() const;

	double getfirst() const { return first; };
	double getsecond() const { return second; };

	void setfirst(double value);
	void setsecond(double value);

	double Distance();
};

