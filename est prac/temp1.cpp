#include<iostream>
using namespace std;
template<class X>
class calc
{
	X a,b;
	public:
		calc(X x,X y)
		{
			a=x;
			b=y;
		}
		X add()
		{
			return a+b;
		}
		X diff()
		{
			return a-b;
		}
		X pro()
		{
			return a*b;
		}
		X div()
		{
			return a/b;
		}
		void menu()
		{
			int c;
			cout<<"Enter a choice: "<<endl<<"1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
			cin>>c;
			while(c!=0)
			{
				switch(c)
				{
					case 0:
						break;
					case 1:
						cout<<add();
						break;
					case 2:
						cout<<diff();
						break;
					case 3:
						cout<<pro();
						break;
					case 4:
						cout<<div();
						break;
				}
				cout<<"\nEnter choice: ";
				cin>>c;
			}
		}
};
int main()
{
	calc<int>calc1(5,2);
	calc<float>calc2(5,2);
	calc2.menu();
	return 0;
}
