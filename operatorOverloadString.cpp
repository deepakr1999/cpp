#include<cstring>
#include<iostream>
using namespace std;

class stringf{
	public:
		char str[20];
		int len;
		void readS(){
			cout<<"Enter the string 1 :";
			cin>>str;
			len=strlen(str);
		}
		void printS(){
			cout<<str<<endl;
		}
		stringf operator +(stringf x1){
			stringf newS;
			cout<< strcat(this->str,x1.str);
			//newS.str=strcat(this->str,x1.str);
			return newS;
		}
};
int main(){
	stringf s1,s2,s3;
	s1.readS();
	s2.readS();
	s3=s1+s2;
	s3.printS();
}
