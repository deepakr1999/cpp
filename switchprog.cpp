#include<iostream>
using namespace std;
int main(){
char opt;
int a,b;
cout<<"Operations :"<<endl;
cout<<"+"<<endl;
cout<<"-"<<endl;
cout<<"*"<<endl;
cout<<"/"<<endl;
cout<<"Enter the operation to perform : ";
cin>>opt;
cout<<"Enter the two numbers : "<<endl;
cin>>a>>b;
switch(opt)
{
case '+':cout<<"the answer is :"<<a+b<<endl;
break;
case '-':cout<<"the answer is :"<<a-b<<endl;
break;
case '*':cout<<"the answer is :"<<a*b<<endl;
break;
case '/':cout<<"the answer is :"<<a/b<<endl;
break;
default:
cout<<"Invalid input";
break;
}
return 0;
}
