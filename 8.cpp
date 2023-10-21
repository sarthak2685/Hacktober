#include<iostream>
using namespace std;
class student{
	protected:
		int id;
		int marks;
	public:
		void setdata(int x, int y)
		{
			id=x;
			marks=y;
		}
};
class result : public student{
	public:
		void display_result()
		{
			cout<<"ID is: "<<id<<endl<<"Marks are: "<<marks;
		}
};
int main()
{
	result obj;
	int a,b;
	cout<<"Enter id: ";
	cin>>a;
	cout<<"Enter marks: ";
	cin>>b;
	obj.setdata(a,b);
	obj.display_result();
	return 0;
	
}
