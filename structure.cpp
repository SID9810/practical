#include<iostream>
using namespace std;
struct employee{
	int eid;
	char favchar;
	float salary;
};
int main()
{
	struct employee sid;   //structure obj1
	sid.eid=1;
	sid.favchar='a';
	sid.salary=120000000;
	struct employee ravi;    //structure obj2
	ravi.eid=2;
	ravi.favchar='b';
	ravi.salary=50000;
	
	cout<<"the Employee id is:"<<sid.eid<<endl;         //values of struc obj1
	cout<<"the favcahr is:"<<sid.favchar<<endl;
	cout<<"the salary is:"<<sid.salary<<endl;
	
		
	cout<<"the Employee id is:"<<ravi.eid<<endl;         //lues of struc obj2
	cout<<"the favcahr is:"<<ravi.favchar<<endl;
	cout<<"the salary is:"<<ravi.salary<<endl;
	
	
	
	return 0;
	
}
