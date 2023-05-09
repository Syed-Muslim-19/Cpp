#include<iostream>
using namespace std;
class BasicShape
{
private:
	double area;
public:
	virtual void CalcArea() = 0;
	double getArea()
	{
		return area;
	}
	void setter(double area)
	{
		this->area = area;
	}
};
class Circle:public BasicShape
{
private:
	long int CenterX, CenterY;
	double radius;
public:
	Circle(int x, int y, int r)
	{
		CenterX = x;
		CenterY = y;
		radius = r;
	}
	void CalcArea()
	{
		int areac;
		areac = 3.14159 * radius * radius;
		setter(areac);
	}
};
class Rectangle:public BasicShape
{
private:
	long int width,length;
public:
	Rectangle(int x, int y)
	{
		width = x;
		length = y;
	}
	void CalcArea()
	{
		int arear;
		arear = width * length;
		setter(arear);
	}
};
int main()
{
	Circle CA(0,0,23);
	Rectangle RA(3,2);
	CA.CalcArea();
	RA.CalcArea();
	cout<<CA.getArea()<<endl;
	cout<<RA.getArea()<<endl;
}