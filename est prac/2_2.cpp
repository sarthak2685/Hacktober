#include<iostream>
using namespace std;
class test{
	public:
	static int a;
	static void disp()
	{
		cout<<a;
	}
	
		
};
int test::a=5;
const int a=2;
int main()
{
	int a =1;
	cout<<a<<endl;   // in main
	cout<<::a<<endl;  // outside main
	cout<<test::a<<endl;  // in class
	test obj;
	obj.disp();
	return 0;
	
}
