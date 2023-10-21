#include<iostream>
using namespace std;
class test{
	int x;
	public:
		test(int a):x(a){}
		operator int() const
		{
			return x;
		}
};
int main()
{
	test ob(5);
	int val;
	val=ob;
	cout<<val;
	return 0;
}
