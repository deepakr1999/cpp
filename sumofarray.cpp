#include<iostream>
using namespace std;
int sum_of_array(int *,int n);
int main(){
int sum,no;
int arr[100];
cout<<"Enter the number of elements "<<endl;
cin>>no;
cout<<"Enter the elements "<<endl;
for(int i=0; i<no; i++)
{
cin>>arr[i];
}
sum=sum_of_array(arr,no);
cout<<"The sum is "<<sum<<endl;
}

int sum_of_array(int *ptr,int n){
int sum=0;
for(int i=0;i<n;i++){
sum=sum+ptr[i];
}
return sum;
}
