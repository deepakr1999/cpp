#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;


int findVowels(string g)
{
int i,count=0;
for(i=0;i<g.length();i++)
{
char c=g[i];
cout<<c;
if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
count++;
}
return count;
}

int main()
{
ifstream ifile;
ifile.open("vowels.txt");
string x,s;
while(getline(ifile,x))
{
s.append(x);
}
int n;
n=findVowels(s);
cout<<endl<<"The count of vowels is : "<<n<<endl;
return 0;
}
