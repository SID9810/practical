#include<iostream>
using namespace std;
void swap(int a, int b){   //temp   a    b       /* ....swapping dosent take place...*/
                                                    // because copy of actual argument use
	int temp=a;           // 3      3    4
	a=b;                 //  3      4    4
	b=temp;      }       //  4      4    3
	void swappointer(int* a, int* b){            //swapping take palce // actual values gyi h isme na ki copy
		int temp=*a;                          //call by refrence using pointer
		*a=*b;
		*b=temp;
	
}
int main(){
	int a=3;
	 int b=4;
	cout<<"the value of a is:"<<a<<endl;
	cout<<"the value of b is:"<<b<<endl;
	swap(a,b);
	cout<<"the swaped value of a is:"<<a<<endl;
	cout<<"the swapped value of b is:"<<b<<endl;
	        //call by refrence 
	        
	cout<<"the value of ponter a is:"<<a<<endl;
	cout<<"the value of pointer b is:"<<b<<endl;
	swappointer(&a,&b);
	cout<<"the swaped value of pointered a is:"<<a<<endl;
	cout<<"the swapped value of pointered b is:"<<b<<endl; 
	
	
	
	
	return 0;
}
