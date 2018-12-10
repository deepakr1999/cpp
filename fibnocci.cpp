#include<iostream>
using namespace std;
int main(){
int a=0,b=1,c=1,no;
cout<<"Enter a number "<<endl;
cin>>no;
cout<<"01";
while(c<no){
cout<<c<<" ";
a=b;
b=c;
c=a+b;
}
}
