#include<iostream>
using namespace std;
class b;
class a{
	int v1;
	public:
		a(int x){v1=x;
		}
		friend void swap(a &ob1,b &ob2);
		void disp()
		{
			cout<<"v1 is "<<v1;
		}
	
};
class b{
	int v2;
	public:
		b(int y)
		{
			v2=y;
		}
		friend void swap(a &ob1,b &ob2);
		void disp()
		{
			cout<<"v2 is "<<v2;
		}
};
void swap(a &ob1,b &ob2)
{
	int temp;
	temp=ob1.v1;
	ob1.v1=ob2.v2;
	ob2.v2=temp;
}
int main()
{
	a m(5);
	b n(2);
	m.disp();
	cout<<endl;
	n.disp();
	cout<<endl;
	swap(m,n);
	cout<<endl;
	m.disp();
	cout<<endl;
	n.disp();
	cout<<endl;
	return 0;
}
