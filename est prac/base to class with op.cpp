#include<iostream>
using namespace std;
class test{
	int x;
	public:
		void operator=(int);
		void disp()
		{
			cout<<x;
		}
		
};
void test::operator=(int a)
{
	x=a;
}
int main()
{
	test ob;
	ob=4;
	ob.disp();
	return 0;
}
