#include<iostream>
using namespace std;

int volume(double r, int h){
	//volume of cylinder
	return 3.14*r*r*h;
}
int volume(double a)
{
	//volume of cube
	return a*a*a;
}
int volume(double l, double b, int h){
 //volume of  cuboidal
 return l*b*h;
}
int main(){
	cout<<"volume of cylinder is:"<<volume(3,7)<<endl;
	cout<<"volume of cube is:"<<volume(3)<<endl;
	cout<<"volume of cuboidal is:"<<volume(3,3,7)<<endl;
	return 0;
}
