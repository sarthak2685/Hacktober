#include<iostream>
using namespace std;
class cube{
	int a;
	public:
		cube(int x)
		{
			a=x;
		}
		inline int res()
		{
			return (a*a*a);
		}
};
int main()
{
	cube obj=3;
	cout<<obj.res();
	return 0;
}
