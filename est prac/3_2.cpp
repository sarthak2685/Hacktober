#include<iostream>
using namespace std;
class rect{
	int l,b,a;
	public:
	static int c;
		rect(){l=0;b=0;c++;
		}
		rect(int z)
		{
			l=z;
			b=z;
			c++;
		}
		rect(int x,int y)
		{
			l=x;
			b=y;
			c++;
		}
	
		~rect()
		{
			cout<<"Detsructing "<<c<<endl;
			c--;
		}
		void area()
		{
			a=l*b;
			cout<<"Area is: "<<a<<endl;
		}
};
int rect::c;
int main()
{
	rect obj[3]={rect(5,4),rect(),rect(4)};
	
	obj[0].area();
	obj[1].area();
	obj[2].area();
//	obj[3].area();
	return 0;
	
	
}
