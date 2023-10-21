#include<iostream>
#include<cstring>
using namespace std;
class astring{
	string x;
	public:
		astring(string y)
		{
			x=y;
		}
		void show()
		{
			cout<<x<<endl;
		}
		friend int operator==(astring op1,astring op2);
		astring operator+(astring op2);
};
int operator==(astring op1,astring op2)
{
	if(strcmp(&op1.x,&op2.x))
	{
		cout<<"Same";
		return 1;
	}
	else
	{
		cout<<"Diff";
		return 0;
	}
}
astring astring::operator+(astring op2)
{
	x=x+op2.x;
	return *this;
}
int main()
{
	string a="hello";
	string b="world";
	astring ob1(a),ob2(b);
	ob1==ob2;
	ob1=ob1+ob2;
	ob1.show();
	return 0;
}
