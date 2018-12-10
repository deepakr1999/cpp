#include<iostream>
using namespace std;

class Poly{
public :
int b,h;
void readR()
{
cout<<"Enter the value of b h : ";
cin>>b>>h;
}
};

class rect:public Poly{
public:
void rectangle()
{
cout<<"Finding area of a rectangle\n";
readR();
}
};


class area:public rect{
public:
int areaR()
{
return b*h;
}
};


int main()
{
area r;
r.rectangle();
cout<<"The area of the rect is "<<r.areaR()<<endl;
}
