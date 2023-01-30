#include<iostream>
using namespace std;
 inline int product(int a, int b){              /* inline function tab bnayege jb 
                                                   function ko bar bar call krne pde of  
												    function m jyada oprations na hon  ,isse memory management rehta hai(kam memory use m aygi kuki bar bar call nhu hoga) ....*/
	return a*b;
}
int main()
{
	int a,b;
	cout<<"enter the value of a "<<endl;
	cin>>a;
cout<<"enter the value of b "<<endl;
	cin>>b;
	cout<<"the product of a and b is:"<<product(a,b)<<endl;
	cout<<"the product of a and b is:"<<product(a,b)<<endl;		 
		cout<<"the product of a and b is:"<<product(a,b)<<endl;
		cout<<"the product of a and b is:"<<product(a,b)<<endl;
			cout<<"the product of a and b is:"<<product(a,b)<<endl;
				cout<<"the product of a and b is:"<<product(a,b)<<endl;
					cout<<"the product of a and b is:"<<product(a,b)<<endl;
						cout<<"the product of a and b is:"<<product(a,b)<<endl;
							cout<<"the product of a and b is:"<<product(a,b)<<endl;
								cout<<"the product of a and b is:"<<product(a,b)<<endl;
									cout<<"the product of a and b is:"<<product(a,b)<<endl;
										cout<<"the product of a and b is:"<<product(a,b)<<endl;
							return 0;
}
