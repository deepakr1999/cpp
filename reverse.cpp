#include<iostream>
using namespace std;
int main()
{
int no,rev=0;
cout<<"Enter the number to be reverse : "<<endl;
cin>>no;
while(no){
rev=rev*10+no%10;
no=no/10;	
}
cout<<"The reversed number is : "<<rev<<endl;
}
