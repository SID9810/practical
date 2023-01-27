#include<iostream>
using  namespace std;
union money{
	int rice;
	char car;
	float puonds;                           /* UNION(same as structure )
	                                            provide better memory management 
	                                            */
	
};
int main(){
	union money m1;
	m1.rice=34;   //(isme error throw krega kyuki ye use nhi ho rhi )   (ek bar m ek hi use hoga)
	m1.car='a';  //(hum at present ye value use kr rhe h toh error nhi dega)
//	cout<<m1.rice<<endl;       //   (isliye isme garbage value dega)
	cout<<m1.car<<endl;      //  (ye correct value de dega )
	return 0;
}
