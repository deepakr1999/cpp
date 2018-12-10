#include<iostream>
using namespace std;

class shape{
public:
int b,h;
void readD(){
cout<<"Enter the value of b and h : ";
cin>>b>>h;
}
};


class rect : public shape{
public:
int area()
{
readD();
cout<<"The area of rect is : "<<b*h<<endl;
}
};

class tri : public shape{
public:
int area()
{
readD();
cout<<"The area of triangle is : "<<0.5*b*h<<endl;
}
};


int main()
{
rect r;
tri t;
r.area();
t.area();

return 0;

}



