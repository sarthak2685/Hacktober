#include<iostream>
using namespace std;
class divfloat;
class divint{
	int a,b;
	public:
		void set(int x, int y)
		{
			a=x;
			b=y;
			
		}
		friend void div(divint p,divfloat q);
};
class divfloat{
	float c,d;
	public:
		void set(float x, float y)
		{
			c=x;
			d=y;
			
		}
		friend void div(divint p,divfloat q);
};
void div(divint p,divfloat q)
{
	int divz = p.a/p.b;
	cout<<"Integer Quotient:"<<divz<<endl;
	float divf = q.c/q.d;
	cout<<"Float Quotient:"<<divf<<endl;
}
int main()
{
	int n1,n2;
	float f1,f2;
	divint z;
	divfloat f;
	cout<<"Enter first number:";
	cin>>n1;
	cout<<"Enter second number:";
	cin>>n2;
	f1=(float)n1;
	f2=(float)n2;
	z.set(n1,n2);
	f.set(f1,f2);
	div(z,f);
	return 0;
}
