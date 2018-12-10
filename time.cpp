#include<iostream>
using namespace std;

class time1{
public:
int h,m,s;
time1(){
h=m=s=0;
}
time1(int h1,int m1,int s1){
h=h1;
m=m1;
s=s1;
}
time1 add(time1 a1,time1 a2){
h=a1.h+a2.h;
m=a1.h+a2.h;
s=a1.s+a2.s;
}
void print(){
cout<<h+m/60<<":"<<m%60+s/60<<":"<<s%60;
}
};
int main()
{
time1 t1;
time1 t2(5,60,20);
time1 t3(6,75,70);
t2.print();
t3.print();
t1.add(t2,t3);
t1.print();

return 0;
}
