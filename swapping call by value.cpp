#include<iostream>
usng namespace std;
int swap(int a, int b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int a=3,b=4;
	cout<<"the value of a is:"<<a<<endl;
	cout<<"the value of b is:"<<b<<endl;
	swap(int a, int b);
	cout<<"the swaped value of a is:"<<a<<endl;
	cout<<"the swapped value of b is:"<<b<<endl;
	return 0;
}
