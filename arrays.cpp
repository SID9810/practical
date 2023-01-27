#include<iostream>
using namespace std;
int main(){
	int marks[]={23,34,45,67};  //4 array declared
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;
	marks[2]=455;         //update/change the value of array
	cout<<marks[2]<<endl; 
	                       //print array of marks using FOR loop
	for(int i;i<=4;i++){
		cout<<"the value of marks "<<i<<"is:"<<marks[i]<<endl;
	}
	
//	pointer and array
int* p=marks;

cout<<"the value of marks[0]/ *p is:"<<*p<<endl;           //derefrence oprator (prints actual value of p pointing to variable)
cout<<"the value of marks[1]/ *p++ is:"<<*p++<<endl;
	cout<<"the value of marks[2]/ *p+2 is:"<<*p+2<<endl;
	cout<<"the value of marks[3]/ *p+3 is:"<<*p+3<<endl;
	return 0;
	
}
