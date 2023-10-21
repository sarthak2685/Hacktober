#include<iostream>
using namespace std;
class test{
	static int a,b;
	public:
		void test()
		{
			cout<<"initialised";
		}
		void print()
		{
			cout<<"a: "<<a<<endl<<"b: "<<endl;
		}
};
int main()
{
	test obj;
	test::a=5;
	test::b=11;
	obj.print();
	return 0;
}
