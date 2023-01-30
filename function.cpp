#include<iostream>
using namespace std;
int sum(int a, int b);   //declaring function
int main(){
	int num1,num2;
	cout<<"enter number1:"<<endl;
	cin>>num1;
	cout<<"enter number2:"<<endl;
	cin>>num2;
	cout<<"the sum is:"<<sum(num1, num2);      //function call
	return 0;
	
}
int sum(int a,int b){             //defining function
	int c=a+b;
	return c;
}
