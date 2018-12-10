#include<iostream>
using namespace std;

class Stack{
int data[max],top;
public:
static int max;
Stack(){
top=-1;
}
void push(int x){
try{
if(top==max)
throw 1;
else{
data[++top]=x;
}
}
catch(int e)
{
cout<<"The top exceeded he limit!\n";
}
}

int pop()
{
try{
if(top<=0)
throw 1;
else
{
return data[top--];
}
}
catch(int e)
{
cout<<"The stck is empty \n";
return -1;
}
}
};


Stack::int max=10;
