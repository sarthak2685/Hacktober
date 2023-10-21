#include<iostream>
using namespace std;
class base{
	int x;
	protected:
		int y;
	public:
		void showb()
		{
			cout<<"Base function   "<<x;
			
		}
		base(int a,int b)
		{
			x=a;
			y=b;
		}
		
};
class der1 : private base{
	int m;
	public:
		void showd1()
		{
			cout<<"Derived 1   "<<m<<"   "<<y;
		}
		der1(int p,int q,int r) : base(q,r)
		{
			m=p;
		}
};
class der2 : protected base{
	int n;
	public:
	void showd2()
	{
		cout<<"Derived 2     "<<n<<"   "<<y;
		
	}
	der2(int p,int q,int r) : base(q,r)
		{
			n=p;
		}
};

int main()
{
	der1 ob1(1,2,3);
	der2 ob2(10,2,3);
	ob1.showd1();
	cout<<endl;
//	ob1.showb();
//	cout<<endl;
	ob2.showd2();
	cout<<endl;
//	ob2.showb();
	return 0;
}
