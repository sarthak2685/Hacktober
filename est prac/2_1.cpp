#include<iostream>
using namespace std;
class rect{
	int l,b,a;
	public:
		void set()
		{
			cout<<"Enter length: ";
			cin>>l;
			cout<<"Enter breadth: ";
			cin>>b;
		}
		void area()
		{
			a=l*b;
			cout<<"Area is: "<<a;
		}
};
int main()
{
	int n;
	cout<<"Enter no of rectangles: ";
	cin>>n;
	rect obj[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter sides of "<<i+1<<" th rectangle\n";
		obj[i].set();
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Area of "<<i+1<<" th rectangle\n";
		obj[i].area();
		cout<<endl;
	}
	return 0;
}
