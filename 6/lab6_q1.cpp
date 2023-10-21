#include<iostream>
using namespace std;
class polygon{
	public:
		float w,h;
		void set_value(float a,float b)
		{
			w=a;
			h=b;
		}
		virtual void area()=0;
};
class triangle : public polygon{
	void area()
	{
		float area= 0.5*w*h;
		cout<<"Area of triangle is: "<<area;
	}
};
class rectangle : public polygon{
	void area()
	{
		float area= w*h;
		cout<<"Area of rectangle is: "<<area;
	}
};
int main()
{
	polygon *p = new triangle;
	p->set_value(2,3);
	p->area();
	polygon *q = new rectangle;
	q->set_value(2,3);
	q->area();
	delete p;
	delete q;
	return 0;
}
