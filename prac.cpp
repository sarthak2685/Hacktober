#include<iostream>
using namespace std;
class calc{
	int a,b,sum,diff,prod,quot;
	public:
		void set(int x,int y)
		{
			a=x;
			b=y;
		}
		int add()
		{
			sum=a+b;
			return sum;
		}
		int sub()
		{
			diff=a-b;
			return diff;
		}
		int mult()
		{
			prod=a*b;
			return prod;
			
		}
		int div()
		{
			quot=a/b;
			return quot;
		}
		
};
int main()
{
	calc vals;
	int n1,n2,c;
	cout<<"Enter first number:";
	cin>>n1;
//	cout<<"past n1";
	cout<<"Enter second number:";
	cin>>n2;
//	cout<<"past n2";
	vals.set(n1,n2);
//	cout<<"Past vals set";
	cout<<"Welcome to Calculator!"<<endl<<"Enter your choice:-"<<endl<<"1. Add two numbers"<<endl<<"2. Subtract two numbers"<<endl<<"3. Multiply two numbers"<<endl<<"4. Divide two numbers"<<endl;
	cin>>c;
	switch(c)
	{
		case 1:
			cout<<"Sum of the numbers is:"<<vals.add()<<endl;
			break;
		case 2:
			cout<<"Difference of the numbers is:"<<vals.sub()<<endl;
			break;
		case 3:
			cout<<"Product of the numbers is:"<<vals.mult()<<endl;
			break;
		case 4:
			cout<<"Division of the numbers is:"<<vals.div()<<endl;
			break;
		default:
			cout<<"Works";
	}
	return 0;
}
