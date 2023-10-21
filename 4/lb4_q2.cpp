#include<iostream>
using namespace std;
class num{
	public:
		int n;
		num(int x)
		{
			n=x;
		}
};
class square : public num{
	public:
		int s;
		void sq()
		{
			s=n*n;
			cout<<"Square of the number is: "<<s;
		}
		square(int x) : num(x){}
		
};
class cube : public square{
	public:
		int c;
		void cu()
		{
			c=s*n;
			cout<<"Cube of number is: "<<c;
		} 
		cube(int x) : square(x){}
	
};
int main()
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	cube obj(n);
	obj.sq();
	cout<<endl;
	obj.cu();
	return 0;
}

