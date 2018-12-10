#include<iostream>
using namespace std;

class polygon{
public:
	double a,b;
	void readRect(){
		cout<<"Enter the value of a & b : ";
		cin>>a>>b;
	}
	void readCircle()
	{
		cout<<"Enter the value of a : ";
		cin>>a;
	}
};

class circle : public polygon{
	public:
	double area;
	void circle_area()
	{
	readCircle();
	area=3.14*(double)a*(double)a;
	cout<<"The area of the circle is : "<<area<<endl;
	}
};

class Rectangle : public polygon{
	public:
	double area;
	void rect_area()
	{
	readRect();
	area=(double)a*(double)b;
	cout<<"The area of the Rectangle is : "<<area<<endl;
	}
};

class Shape : public circle, public Rectangle
{
	public:
	void both()
	{
	circle_area();
	rect_area();
	}
};

int main()
{
Shape s;
s.both();
return 0;
}
