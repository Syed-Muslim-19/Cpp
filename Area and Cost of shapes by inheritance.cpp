#include<iostream>
using namespace std;

class Shape
{
protected:
    int length, breadth, height;
public:
    int Area;
    Shape()
    {
        length = breadth = height = Area = 0;
    }
    virtual int getArea() = 0;
};

class Painting
{
public:
    int getCost(int area)
    {
        int Cost;
        Cost = 70 * area;
        return Cost;
    }
};

class Square : public Shape, public Painting
{
public:
    Square(int l)
    {
        length = l;
    }
    int getArea()
    {
        Area = length * length;
        return Area;
    }
};

class Rectangle : public Shape, public Painting
{
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int getArea()
    {
        Area = length * breadth;
        return Area;
    }
};

class Triangle : public Shape, public Painting
{
public:
    Triangle(int h, int b)
    {
        height = h;
        breadth = b;
    }
    int getArea()
    {
        Area = 0.5 * height * breadth;
        return Area;
    }
};

int main()
{
    //change the values inside the object to change the area accourding to the condition
    Square s(5);
    Rectangle r(5, 7);
    Triangle t(5, 12);
    cout << "Total Area of Square : " << s.getArea() << endl;
    cout << "Total Area of Rectangle : " << r.getArea() << endl;
    cout << "Total Area of Triangle : " << t.getArea() << endl;
    return 0;
}
