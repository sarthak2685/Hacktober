#include<iostream>
using namespace std;
class apple{
	int a;
	public:
		int ca;
		apple(int n)
		{
			a=n;
		}
		void capple()
		{
			ca=a;
		}
};
class mango{
	int m;
	public:
		int cm;
		mango(int n)
		{
			m=n;
		}
		void cmango()
		{
			cm=m;
			
		}
};
class fruits : public apple,public mango{
	int total;
	public:
		void count()
		{
			total=ca+cm;
			cout<<"Number of apples: "<<ca<<endl<<"Number of mangoes: "<<cm<<endl<<"Total number of fruits: "<<total;
		}
		fruits(int x,int y) : apple(x),mango(y){}
};
int main()
{
	int a,b;
	cout<<"Enter number of apples: ";
	cin>>a;
	cout<<"Enter number of mangoes: ";
	cin>>b;
	fruits obj(a,b);
	obj.cmango();
	obj.capple();
	obj.count();
	return 0;
}
