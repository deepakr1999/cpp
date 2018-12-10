#include<iostream>
using namespace std;

class student{
	protected:
	string name;
	int m1,m2,m3;
	int age;
	double percentage;
	virtual void read()=0;
	virtual void perc()=0;
	public:
	void printP(){
		percentage=(m1+m2+m3);
		cout<<"Ther percentage is : "<<percentage<<endl;
	}
};

class engineering : public student
{
	public:
	void read(){
	cout<<"The type of student is : Engineering \n";
	cout<<"Enter the name , age of the student : ";
	cin>>name>>age;
	}
	void perc()
	{
	cout<<"Enter the subject1(max 30) mark :  ";
	cin>>m1;
	cout<<"Enter the subject2(max 30) mark :  ";
        cin>>m2;
	cout<<"Enter the subject3(max 30) mark :  ";
        cin>>m3;
	}
};


class science : public student
{
        public:
        void read(){
        cout<<"The type of student is : Science \n";
        cout<<"Enter the name , age of the student : ";
        cin>>name>>age;
        }
        void perc()
        {
        cout<<"Enter the subject1(max 30) mark :  ";
        cin>>m1;
        cout<<"Enter the subject2(max 30) mark :  ";
        cin>>m2;
        cout<<"Enter the subject3(max 30) mark :  ";
        cin>>m3;
        }
};


class medical : public student
{
        public:
        void read(){
        cout<<"The type of student is : Medical \n";
        cout<<"Enter the name , age of the student : ";
        cin>>name>>age;
        }
        void perc()
        {
        cout<<"Enter the subject1(max 30) mark :  ";
        cin>>m1;
        cout<<"Enter the subject2(max 30) mark :  ";
        cin>>m2;
        cout<<"Enter the subject3(max 30) mark :  ";
        cin>>m3;
        }
};


int main()
{
engineering e;
medical m;
science s;
e.read();
e.perc();
m.read();
m.perc();
s.read();
s.perc();
e.printP();
m.printP();
s.printP();
return 0;
}
