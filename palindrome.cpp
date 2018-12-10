#include<iostream>
using namespace std;
int main(){
int no;
char str[25];
cout<<"Enter the length of the string "<<endl;
cin>>no;
cout<<"Enter the  string "<<endl;
cin>>str;
for(int i=0,j=no-1;i<=j;i++,j--)
{
if(str[i]!=str[j]){
cout<<"the str is not palindrome "<<endl;
return 0;
}
}

cout<<"The string is palindrome"<<endl;
return 0;
}
