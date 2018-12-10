#include<iostream>
using namespace std;

class Person{
public:
string name;
int age;
void readPerson()
{
cout<<"Enter the name and age ; ";
cin>>name>>age;
}
};


class teacher:public Person
{
public:
int no_pub;

void readT(){
readPerson();
cout<<"Enter the number of publication: ";
cin>>no_pub;
}

void show()
{
cout<<"The details are as follows: \n";
cout<<"Name : "<<name<<"\nAge : "<<age<<"\nNumber of publication : "<<no_pub<<endl;
}
};

class student :public Person
{
public:
int m1,m2,m3;

void readS(){
readPerson();
cout<<"Enter the marks of m1 m2 m3 : ";
cin>>m1>>m2>>m3;
}
};


class Marks: public student{
public:
void show()
{
cout<<"The details are as follows: \n";
cout<<"Name : "<<name<<"\nAge : "<<age<<"\nPercentage : "<<(m1+m2+m3)*1.1<<endl;
}
};

int main()
{
teacher t;
t.readT();
t.show();
Marks m;
m.readS();
m.show();
return 0;
}







