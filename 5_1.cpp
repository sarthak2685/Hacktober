#include<iostream>
using namespace std;
class alpha{
	int a;
	public:
		alpha(int x){a=x;
		}
		void adisp()
		{
			cout<<"a is "<<a<<endl;
		}
};
class beta{
	int b;
	public:
		beta(int y){b=y;
		}
		void bdisp()
		{
			cout<<"b is "<<b<<endl;
		}
};
class gamma : public alpha, public beta{
	int c;
	public:
		gamma(int q,int w,int z):alpha(q),beta(w)
		{
			c=z;
		}
		void gdisp()
		{
			cout<<"c is "<<c<<endl;
		}
};
int main()
{
	gamma ob(1,2,3);
	ob.adisp();
	ob.bdisp();
	ob.gdisp();
	return 0;
}
