#include<iostream>
using namespace std;
int sum(int a, int b){
	return a+b;
}
int sum(int a, int b, int c){
	return a+b+c;
	
}
int main()                                //sum function with 2 arguments
{      cout<<"using same name function with 2 agruments:"<<endl;
	cout<<"the sum of a and b is:"<<sum(3,5)<<endl;
	                                    //sun function with 3 arguments
	   cout<<"using  same name function with 3 arguments:"<<endl; 
	cout<<"the sum of a , b and c is:"<<sum(3,5,6)<<endl;
	return 0;
	
}
