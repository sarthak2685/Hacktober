#include<iostream>
using namespace std;
class test{
	public:
	int a=5;

	int sq() const // declaration of const member function
	{
		a=6;
		return a*a;
	}
		
};
const int a=2;
int main()
{
	int a =1;
	cout<<a<<endl;   // in main
	cout<<::a<<endl;  // outside main
	test obj;
	cout<<obj.sq();
	return 0;
	
}
//THIS PROGRAM GIVES ERROR BEC CONST FUNC CAN'T MODIFY VALUES.
