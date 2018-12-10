#include<iostream>
using namespace std;

int main(){
int a,b;
cout<<"Enter the value of a and b ";
cin>>a>>b;
try
{
if(b<=0){
throw "exception";
}
cout<<"Answer : "<<a/b<<endl;

}
catch(...)
{
cout<<"EXCEPTION OCCURED"<<endl;
}
return 0;
}
