#include<iostream>
#include<cmath>
using namespace std;
//void area()
//{
//	float b,h;
//	cout<<"Enter base of right angled triangle: ";
//	cin>>b;
//	cout<<"Enter height of right angled triangle: ";
//	cin>>h;
//	float a=0.5*b*h;
//	cout<<"Area: "<<a;
//}
float area(float x, float y=3)
{
	float a=0.5*x*y;
	return a;
}
//float area(float s=4)
//{
//	float a= (sqrt(3)/4)*s*s;
//	return a;
//}
int main()
{
	int c;
	cout<<"Area of:-\n1. Right angled triangle\n2. Isosceles triangle\n3. Equilateral traingle\n";
	cin>>c;
	switch(c)
	{
		case 1:
//			cout<<area();
			
			break;
		case 2:
			float b1,h1;
			cout<<"Enter base of triangle: ";
	        cin>>b1;
	        cout<<"Enter height of triangle: ";
	        cin>>h1;
	        cout<<"Area: "<<area(b1,h1);
	        break;
	    case 3:
//	    	float side;
//	    	cout<<"Enter side of triangle: ";
//	    	cin>>side;
//	    	cout<<"Area: "<<area(side);
	    	break;
	}
	return 0;
}

