#include<iostream>
using namespace std;
class test{
	public:
	int a;
		test(){a=4;
		}
		test(int k){a=k;
		}
		
		void area()
		{
			cout<<a*a<<endl;
		}
		test(int x,int y)
		{
			this->a=x+y;
		}
};
int main()
{
	int test::*val;
	void(test::*f)();
	test obj1=2;
	test obj2(2,3);
	test *obj;
	obj = new test;
	val=&test::a;
	f=&test::area;
	cout<<"a of obj1: "<<obj1.*val<<endl<<"a of obj2: "<<obj2.*val<<endl;
	obj->area();
	obj1.area();
	obj2.area();
	cout<<"\n\n";
	(obj1.*f)();
	(obj2.*f)();
	delete obj;
	return 0;
}
