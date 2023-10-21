#include<iostream>
#include<cstring>
using namespace std;
class x{
	char a[50];
	public:
		x(char* str)
		{
			strcpy(a,str);
		}
		void xdisp()
		{
			cout<<"x is: "<<a<<endl;
		}
};
class y{
	char b[50];
	public:
		y(char* str)
		{
			strcpy(b, str);
		}
		void ydisp()
		{
			cout<<"y is: "<<b<<endl;
		}
};
class z: public x,public y{
	char c[50];
	public:
		z(char* s,char* t):x(s),y(t)
		{
			strcat(s,t);
			strcpy(this->c,s);
			
		}
		void zdisp()
		{
			cout<<"z is: "<<c<<endl;
		}
};
int main()
{
	char str1[]="Hello ";
	char str2[]="World";
	z ob(str1,str2);
	ob.xdisp();
	cout<<endl;
	ob.ydisp();
	cout<<endl;
	ob.zdisp();
	return 0;
}
