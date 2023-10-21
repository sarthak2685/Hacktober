#include<iostream>
using namespace std;
class rect{
	int l,b;
	public:
		void set(int x,int y)
		{
			l=x;
			b=y;
		}
		void area()
		{
			cout<<"Area is: "<<l*b<<endl;
		}
};
int main()
{
	rect ob[3];
	for(int i=0;i<3;i++)
	{
		int p,q;
		cout<<"Enter length of "<<i+1<<" th rectangle: ";
		cin>>p;
		cout<<"Enter breadth of "<<i+1<<" th rectangle: ";
		cin>>q;
		ob[i].set(p,q);
	}
	for(int i=0;i<3;i++)
	{
		ob[i].area();
	}
	return 0;
}
