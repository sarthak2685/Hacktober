#include<iostream>
using namespace std;
class complex{
	public:
	float a,b;
	
		void setcomplex(float x,float y)
		{
			a=x;
			b=y;
		}
		void displaycomplex()
		{
			cout<<"Complex number is "<<a<<" + "<<b<<"i";
		}
};
complex sumcomplex(complex p,complex q)
{
	complex res;
	float r=p.a+q.a;
	float i=p.b+q.b;
	res.a=r;
	res.b=i;
	return res;
}
int main()
{
	complex c1,c2,sum;
	c1.setcomplex(1,3);
	c2.setcomplex(2,4);
	sum=sumcomplex(c1,c2);
	sum.displaycomplex();
	return 0;
}
