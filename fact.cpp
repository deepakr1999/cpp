#include<iostream>
using namespace std;
int fact(int n);
int main(){
int n;
cout<<"Enter the number "<<endl;
cin>>n;
cout<<"The factorial is "<<fact(n);
return 0;
}
int fact(int n)
{
if(n==1 || n==0){
return 1;
}
else {
return n*fact(n-1);
}
}
