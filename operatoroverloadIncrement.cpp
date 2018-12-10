#include<iostream>
using namespace std;

class count{
public:
	int counter;
	void operator ++(int){
		this->counter++;
	}
	void operator ++(){
		++this->counter;
	}
};



int main(){
	count c1;
	c1.counter=0;
	cout<<"The value of counter before post incrementing :"<<c1.counter<<endl;
	c1++;
	cout<<"The value of couner after post incrementing :"<<c1.counter<<endl;;
        cout<<"The value of counter before pre incrementing :"<<c1.counter<<endl;
	++c1;
        cout<<"The value of couner after pre incrementing :"<<c1.counter<<endl;

	return 0;
}
