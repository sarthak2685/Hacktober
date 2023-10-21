#include<iostream>
#include<cmath>
using namespace std;
class tri;
class rect{
	int length;
	int breadth;
	string color;
	public:
		void setdata()
		{
			cout<<"Enter length: ";
			cin>>length;
			cout<<"Enter breadth: ";
			cin>>breadth;
			cout<<"Enter color: ";
			cin>>color;
		}
		friend void totarea(rect x,tri y);
};
class tri{
	int a,b,c;
	string color;
	public:
		tri()
		{
			color="Green";
		}
		void setdata()
		{
			cout<<"Enter s1: ";
			cin>>a;
			cout<<"Enter s2: ";
			cin>>b;
			cout<<"Enter s3: ";
			cin>>c;
			cout<<"Enter color: ";
			cin>>color;
		}
		friend void totarea(rect x,tri y);
};
void totarea(rect x,tri y)
{
	int sum=0;
	int r_area,t_area;
	r_area = x.length*x.breadth;
	int p=y.a+y.b+y.c;
	int s=p/2;
	int s1=y.a;
	int s2=y.b;
	int s3=y.c;
//	cout<<"s-s1 "<<s-s1<<" s-s2 "<<s-s2<<" s-s3 "<<s3<<endl;
	int h=s*(s-s1)*(s-s2)*(s-s3);
	t_area = sqrt(h);
	sum=r_area+t_area;
	cout<<"Rectangle area: "<<r_area<<endl<<"Triangle area: "<<t_area<<endl<<"Total area: "<<sum<<" sq metres";
}
int main()
{
	rect rectangle;
	tri triangle;
	rectangle.setdata();
	triangle.setdata();
	totarea(rectangle,triangle);
	return 0;
}

