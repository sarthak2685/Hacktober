#include<iostream>
using namespace std;
class test{
	int x;
	public:
		test(int a):x(a){};
		void disp()
		{
			cout<<x;
		}
		
};
int main()
{
	test ob=4;
	ob.disp();
	return 0;
}
