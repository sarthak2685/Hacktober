#include<iostream>
using namespace std;
class shape{
	public:
		virtual void area()=0;
		virtual void display()=0;
};
class triangle : public shape{
	public:
	void area()
	{
		int w,h;
		cout<<"Enter width of triangle: ";
		cin>>w;
		cout<<"\nEnter height of triangle: ";
		cin>>h;
		float area= 0.5*w*h;
		cout<<"\nArea of triangle is: "<<area;
	}
	void display()
	{
		cout<<"\nThis is a triangle\n";
	}
};
class rectangle : public shape{
	public:
	void area()
	{
		int w,h;
		cout<<"Enter width of rectangle: ";
		cin>>w;
		cout<<"\nEnter height of rectangle: ";
		cin>>h;
		float area= w*h;
		cout<<"\nArea of rectangle is: "<<area;
	}
	void display()
	{
		cout<<"\nThis is a rectangle\n";
	}
};
class circle : public shape{
	public:
	void area()
	{
		int r;
		cout<<"Enter radius of circle: ";
		cin>>r;
		float area= 3.14*r*r;
		cout<<"\nArea of circle is: "<<area;
	}
	void display()
	{
		cout<<"\nThis is a circle\n";
	}
};
int main()
{
	circle c;
	rectangle r;
	triangle t;
	c.area();
	c.display();
	r.area();
	r.display();
	t.area();
	t.display();
	
	return 0;
}
