#include<iostream>
using namespace std;

class shape{
public:
int r;
void readR(){
cout<<"Enter the radisu : ";
cin>>r;
}
};


class circle:public shape{
public:
int area(){
	return 3.14*r*r;
}
};



int main()
{
circle c;
c.readR();
cout << "The area of the circle is : " << c.area();
}
