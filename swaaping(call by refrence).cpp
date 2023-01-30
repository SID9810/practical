#include<iostream>
using namespace std;
//void swap(int a, int b){
//	int temp=a;
//	a=b;
//	b=temp;
//}
void swappointer(int* a,int* b){
	int   temp=*a;
	*a=*b;
	*b=temp;
 
}
int main(){
	int a,b;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"enter the value of b:";
	cin>>b;
	cout<<"  the value of a:"<<a<<endl;
	cout<<"  the value of b:"<<b<<endl;
	swappointer(&a,&b);
	cout<<"the swapped value of a is:"<<a<<endl;
	cout<<"the swapped value of b is:"<<b<<endl;
	return 0;
}

