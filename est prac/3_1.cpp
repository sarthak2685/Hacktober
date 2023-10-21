#include<iostream>
using namespace std;
class rect{
	int l,b,a;
	public:
		rect(){l=0;b=0;
		}
		rect(int x,int y)
		{
			l=x;
			b=y;
		}
		rect(int z)
		{
			l=z;
			b=z;
		}
		void area()
		{
			a=l*b;
			cout<<"Area is: "<<a<<endl;
		}
};
int main()
{
	rect r1=2;
	rect r2;
	rect r3(3,2);
	r1.area();
	r2.area();
	r3.area();
	return 0;
}
