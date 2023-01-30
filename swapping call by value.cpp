#include<iostream>
using namespace std;
int swap(int a, int b){
	int temp=a;
	a=b;                      //swapping dosent take place 
	                          //copied value agrument m jati h isliye nhi hogi swapping
	b=temp;
}
int main(){
	int a=3,b=4;
	cout<<"the value of a is:"<<a<<endl;
	cout<<"the value of b is:"<<b<<endl;
	swap(a,b);
	cout<<"the swaped value of a is:"<<a<<endl;
	cout<<"the swapped value of b is:"<<b<<endl;
	return 0;
}
