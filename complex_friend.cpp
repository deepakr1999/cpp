#include<iostream>
using namespace std;

class complex{
private:
	int r;
	float i;
public:
	void setdata(){
	cout<<"Enter r and i :"<<endl;
	cin>>r>>i;
	}
	friend complex add(complex &,complex &);
	void show(){
	cout<<r<<" "<<i;
	}
};

complex add(complex &x1,complex &x2){
complex temp;
temp.r=x1.r+x2.r;
temp.i=x1.i+x2.i;
return temp;
}

int main(){
complex c1,c2,c3;
c1.setdata();
c2.setdata();
c3=add(c1,c2);
cout<<"Addition of the numbers is :"<<endl;
c3.show();
}
