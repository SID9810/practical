#include<iostream>
using namespace std;
float moneyrecived(int currentmoney, float factor=1.04){
	return currentmoney*factor;
}                                                //default agrument eg.
int main(){
	float money=100000;
	cout<<"if you have "<<money<<"RS in your bank account , you will recive "<<moneyrecived(money)<<"Rs after 1 year"<<endl;
	cout<<"FOR VIP "<<endl<<"if you have"<<money<<"RS in your bank account , you will recive"<<moneyrecived(money,1.10)<<"Rs after 1 year";
 
	return 0;
	
}
