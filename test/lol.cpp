#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main(){
int n = 50;
string x;
x="LOL\n";
ofstream res;
for(int i=0;i<n;i++)
{
res.open((string)i+".txt");
res<<x;
}
return 0;


}
